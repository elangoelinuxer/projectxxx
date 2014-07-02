/*
 * isl29044.c - Intersil ISL29028  ALS & Proximity Driver
 *
 * By Intersil Corp
 * Michael DiGioia
 *
 * Based on isl29028a.c
 *	by Michael DiGioia <mdigioia@intersil.com>
 *  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; version 2 of the License.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA.
 * ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 *
 */

#include <linux/module.h>
#include <linux/init.h>
#include <linux/slab.h>
#include <linux/i2c.h>
#include <linux/kernel.h>
#include <linux/hwmon.h>
#include <linux/delay.h>
#include <linux/err.h>
#include <linux/sysfs.h>
#include <linux/pm_runtime.h>

/* Insmod parameters */
//I2C_CLIENT_INSMOD_1(isl29044);

#define MODULE_NAME	"isl29044"

/* registers */
#define ISL29028_REG_VENDOR_REV                 0x06
#define ISL29028_VENDOR                         1
#define ISL29028_VENDOR_MASK                    0x0F
#define ISL29028_REV                            4
#define ISL29028_REV_SHIFT                      4
#define ISL29028_REG_DEVICE                     0x22
#define ISL29028_DEVICE                        	22 

// Table 1: all i2c registers and bits per register
#define REG_CMD_1		0x01 // configure, range is reg 1 bit 1
#define REG_CMD_2		0x02 // interrupt control

#define REG_INT_LOW_PROX	0x03 // 8 bits intr low thresh for prox
#define REG_INT_HIGH_PROX	0x04 // 8 bits intr high thresh for prox
#define REG_INT_LOW_ALS 	0x05 // 8 bits intr low thresh for ALS-IR
#define REG_INT_LOW_HIGH_ALS	0x06 // 8 bits(0-3,4-7) intr high/low thresh for ALS-IR
#define REG_INT_HIGH_ALS	0x07 // 8 bits intr high thresh for ALS-IR

#define REG_DATA_PROX		0x08 // 8 bits of PROX data
#define REG_DATA_LSB_ALS	0x09 // 8 bits of ALS data
#define REG_DATA_MSB_ALS	0x0A // 4 bits of ALS MSB data

#define ISL_TEST1 		0x0E // test write 0x00
#define ISL_TEST2 		0x0F // test write 0x00

#define ISL_MOD_MASK		0xE0
#define ISL_MOD_POWERDOWN	0

#define ISL_MOD_ALS_ONCE	1
#define ISL_MOD_IR_ONCE		2
#define ISL_MOD_PS_ONCE		3
#define ISL_MOD_RESERVED	4
#define ISL_MOD_ALS_CONT	5
#define ISL_MOD_IR_CONT		6
#define ISL_MOD_PS_CONT		7
#define ISL_MOD_DEFAULT		8

#define PROX_EN_MASK          0x80 // prox sense on mask, 1=on, 0=off
#define PROX_CONT_MASK        0x70 // prox sense contimnuous mask
//IR_CURRENT_MASK is now PROX_DR_MASK with just 0 or 1 settings
#define PROX_DR_MASK          0x08 // prox drive pulse 220ma sink mask def=0 110ma
#define ALS_EN_MASK           0x04 // prox sense enabled contimnuous mask
#define ALS_RANGE_HIGH_MASK   0x02 // ALS range high LUX mask
#define ALSIR_MODE_SPECT_MASK 0x01 // prox sense contimnuous mask

#define IR_CURRENT_MASK		0xC0
#define IR_FREQ_MASK		0x30
#define SENSOR_RANGE_MASK	0x03
#define ISL_RES_MASK		0x0C

static int last_mod;

static DEFINE_MUTEX(mutex);

static int isl_set_range(struct i2c_client *client, int range)
{
        int ret_val;

        ret_val = i2c_smbus_read_byte_data(client, REG_CMD_1);
        if (ret_val < 0)
                return -EINVAL;
        ret_val &= ~ALS_RANGE_HIGH_MASK;  /*reset the bit */
        ret_val |= range;
        ret_val = i2c_smbus_write_byte_data(client, REG_CMD_1, ret_val);

 printk(KERN_INFO MODULE_NAME ": %s isl29044 set_range call, \n", __func__);
        if (ret_val < 0)
                return ret_val;
        return range;
}

//Set Mode of operation
static int isl_set_mod(struct i2c_client *client, int mod)
{
	int ret, val, freq;

	// check current mod
	switch (mod) {
	case ISL_MOD_POWERDOWN:
	case ISL_MOD_RESERVED:
		break;
	case ISL_MOD_ALS_ONCE:
	case ISL_MOD_ALS_CONT:
		freq = 0;
		break;
	case ISL_MOD_IR_ONCE:
	case ISL_MOD_IR_CONT:
	case ISL_MOD_PS_ONCE:
	case ISL_MOD_PS_CONT:
		freq = 1;
		break;
	default:
		return ISL_MOD_DEFAULT; // default is prox off and als off
	}

	/* set operation mod */
	val = i2c_smbus_read_byte_data(client, REG_CMD_1);
	if (val < 0)
		return -EINVAL;
	if (mod == ISL_MOD_PS_CONT) val |= PROX_EN_MASK;
	else if (mod == ISL_MOD_ALS_CONT) val |= ALS_EN_MASK;	
	else val |= ISL_MOD_RESERVED;

	ret = i2c_smbus_write_byte_data(client, REG_CMD_1, val);
	if (ret < 0)
		return -EINVAL;

	if (mod != ISL_MOD_POWERDOWN)
		last_mod = mod;

	return mod;
}

static int isl_get_res(struct i2c_client *client)
{
	int val;

 printk(KERN_INFO MODULE_NAME ": %s isl29044 get_res call, \n", __func__);
	val = i2c_smbus_read_byte_data(client, REG_CMD_2);

	if (val < 0)
		return -EINVAL;

	val &= ISL_RES_MASK;
	val >>= 2;

	switch (val) {
	case 0:
	case 1:
	case 2:
	case 3:
		return 4096;
	default:
		return -EINVAL;
	}
}

static int isl_get_mod(struct i2c_client *client)
{
	int val;

	val = i2c_smbus_read_byte_data(client, REG_CMD_1);
	if (val < 0)
		return -EINVAL;
        if (val &= PROX_EN_MASK) val = ISL_MOD_PS_CONT;
        else if (val &= ALS_EN_MASK) val = ISL_MOD_ALS_CONT;
        else val |= ISL_MOD_RESERVED;

	return val;
}

static ssize_t
isl_sensing_range_show(struct device *dev,
		       struct device_attribute *attr, char *buf)
{
	struct i2c_client *client = to_i2c_client(dev);
	int val;

	mutex_lock(&mutex);
	pm_runtime_get_sync(dev);
	val = i2c_smbus_read_byte_data(client, REG_CMD_1);
	pm_runtime_put_sync(dev);
	mutex_unlock(&mutex);
	val &= ALS_RANGE_HIGH_MASK;
	dev_dbg(dev, "%s: range: 0x%.2x\n", __func__, val);

	if (val < 0)
		return -EINVAL;
	return sprintf(buf, "%d00\n", val ); // 0 or 1 now not old num
}

static ssize_t
ir_current_show(struct device *dev, struct device_attribute *attr, char *buf)
{
	struct i2c_client *client = to_i2c_client(dev);
	int val;

	mutex_lock(&mutex);
	pm_runtime_get_sync(dev);
	val = i2c_smbus_read_byte_data(client, REG_CMD_1);
	pm_runtime_put_sync(dev);
	mutex_unlock(&mutex);

	val &= PROX_DR_MASK;
	dev_dbg(dev, "%s: IR current: 0x%.2x\n", __func__, val);

	if (val < 0)
		return -EINVAL;

	switch (val) {
	case 0:
		val = 110;
		break;
	case 1:
		val = 220;
		break;
	default:
		return -EINVAL;
	}

	if (val)
		val = sprintf(buf, "%d\n", val);
	else
		val = sprintf(buf, "%s\n", "110");
	return val;
}

static ssize_t
isl_sensing_mod_show(struct device *dev,
		     struct device_attribute *attr, char *buf)
{
	struct i2c_client *client = to_i2c_client(dev);
	int val;

	mutex_lock(&mutex);
	pm_runtime_get_sync(dev);
	val = isl_get_mod(client);
	pm_runtime_put_sync(dev);
	mutex_unlock(&mutex);

	dev_dbg(dev, "%s: mod: 0x%.2x\n", __func__, val);

	if (val < 0)
		return val;

	switch (val) {
	case ISL_MOD_POWERDOWN:
		return sprintf(buf, "%s\n", "0-Power-down");
	case ISL_MOD_RESERVED:
		return sprintf(buf, "%s\n", "4-Reserved");
	case ISL_MOD_ALS_CONT:
		return sprintf(buf, "%s\n", "5-ALS continuous");
	case ISL_MOD_PS_CONT:
		return sprintf(buf, "%s\n", "7-Proximity continuous");
	default:
		return -EINVAL;
	}
}

static ssize_t
isl_output_data_show(struct device *dev,
		     struct device_attribute *attr, char *buf)
{
	struct i2c_client *client = to_i2c_client(dev);
	int ret_val, val, mod;
	unsigned long int output = 0;
	int temp;

	mutex_lock(&mutex);
	pm_runtime_get_sync(dev);

	temp = i2c_smbus_read_byte_data(client, REG_DATA_MSB_ALS);
	if (temp < 0)
		goto err_exit;
	ret_val = i2c_smbus_read_byte_data(client, REG_DATA_LSB_ALS);
	if (ret_val < 0)
		goto err_exit;
	ret_val |= temp << 8;

	dev_dbg(dev, "%s: Data: %04x\n", __func__, ret_val);

	mod = isl_get_mod(client);
	switch (mod) {
	case ISL_MOD_ALS_CONT:
	case ISL_MOD_ALS_ONCE:
	case ISL_MOD_IR_ONCE:
	case ISL_MOD_IR_CONT:
		output = ret_val;
		break;
	case ISL_MOD_PS_CONT:
	case ISL_MOD_PS_ONCE:
		val = i2c_smbus_read_byte_data(client, REG_DATA_PROX);
		if (val < 0)
			goto err_exit;
		output = val;
		break;
	default:
		goto err_exit;
	}
	pm_runtime_put_sync(dev);
	mutex_unlock(&mutex);
	return sprintf(buf, "%ld\n", output);

err_exit:
	pm_runtime_put_sync(dev);
	mutex_unlock(&mutex);
	return -EINVAL;
}

static ssize_t
isl_sensing_range_store(struct device *dev,
                        struct device_attribute *attr,
                        const char *buf, size_t count)
{
        struct i2c_client *client = to_i2c_client(dev);
        unsigned int ret_val;
        unsigned long val;

        if (strict_strtoul(buf, 10, &val))
                return -EINVAL;

        switch (val) {
        case 0:
                val = 0;
                break;
        case 1:
                val = 1;
                break;
        default:
                return -EINVAL;
        }

        mutex_lock(&mutex);
        pm_runtime_get_sync(dev);
        ret_val = isl_set_range(client, val);
        pm_runtime_put_sync(dev);
        mutex_unlock(&mutex);

        if (ret_val < 0)
                return ret_val;
        return count;
}

static ssize_t
ir_current_store(struct device *dev,
		 struct device_attribute *attr, const char *buf, size_t count)
{
	struct i2c_client *client = to_i2c_client(dev);
	unsigned int ret_val;
	unsigned long val;

	if (!strncmp(buf, "110", 3))
		val = 0;
        if (!strncmp(buf, "220", 3))
                val = 1;

	else {
		if (strict_strtoul(buf, 10, &val))
			return -EINVAL;
		switch (val) {
		case 110:
			val = 0;
			break;
		case 220:
			val = 1;
			break;
		default:
			return -EINVAL;
		}
	}

	mutex_lock(&mutex);
	pm_runtime_get_sync(dev);

	ret_val = i2c_smbus_read_byte_data(client, REG_CMD_1);
	if (ret_val < 0)
		goto err_exit;

	ret_val &= ~PROX_DR_MASK;	/*reset the bit before setting them */
	ret_val |= (val << 3);

	ret_val = i2c_smbus_write_byte_data(client, REG_CMD_1, ret_val);
	if (ret_val < 0)
		goto err_exit;

	pm_runtime_put_sync(dev);
	mutex_unlock(&mutex);

	return count;

err_exit:
	pm_runtime_put_sync(dev);
	mutex_unlock(&mutex);
	return -EINVAL;
}

static ssize_t
isl_sensing_mod_store(struct device *dev,
		      struct device_attribute *attr,
		      const char *buf, size_t count)
{
	struct i2c_client *client = to_i2c_client(dev);
	int ret_val;
	unsigned long val;

	if (strict_strtoul(buf, 10, &val))
		return -EINVAL;
	if (val > 8)
		return -EINVAL;

	mutex_lock(&mutex);
	pm_runtime_get_sync(dev);
	ret_val = isl_set_mod(client, val);
	pm_runtime_put_sync(dev);
	mutex_unlock(&mutex);

	if (ret_val < 0)
		return ret_val;
	return count;
}

static DEVICE_ATTR(range, S_IRUGO | S_IWUSR,
		   isl_sensing_range_show, isl_sensing_range_store);
static DEVICE_ATTR(mod, S_IRUGO | S_IWUSR,
		   isl_sensing_mod_show, isl_sensing_mod_store);
static DEVICE_ATTR(ir_current, S_IRUGO | S_IWUSR,
		   ir_current_show, ir_current_store);
static DEVICE_ATTR(output, S_IRUGO, isl_output_data_show, NULL);

static struct attribute *mid_att_isl[] = {
	&dev_attr_range.attr,
	&dev_attr_mod.attr,
	&dev_attr_ir_current.attr,
	&dev_attr_output.attr,
	NULL
};

//Register sysfs files
/*
device_create_file (&new_client->dev, &dev_attr_range);
device_create_file (&new_client->dev, &dev_attr_mod);
device_create_file (&new_client->dev, &dev_attr_ir_current);
device_create_file (&new_client->dev, &dev_attr_output);
*/

static struct attribute_group m_isl_gr = {
	.name = "isl29044",
	.attrs = mid_att_isl
};

static int isl_set_default_config(struct i2c_client *client)
{
	int ret=0;
	ret = i2c_smbus_write_byte_data(client, REG_CMD_1, 0x80); // Prox ena
	if (ret < 0)
		return -EINVAL;
 printk(KERN_INFO MODULE_NAME ": %s isl29044 set_default_config call, \n", __func__);

	return 0;
}

/* Return 0 if detection is successful, -ENODEV otherwise */
static int isl29044_detect(struct i2c_client *client, int kind,
                          struct i2c_board_info *info)
{
        struct i2c_adapter *adapter = client->adapter;

        if (!i2c_check_functionality(adapter, I2C_FUNC_SMBUS_BYTE_DATA))
                return -ENODEV;

 printk(KERN_INFO MODULE_NAME ": %s isl29044 detact call, kind:%d type:%s addr:%x \n", __func__, kind, info->type, info->addr);

        if (kind <= 0) {
                int vendor, device, revision;

                vendor = i2c_smbus_read_word_data(client,
                                                  ISL29028_REG_VENDOR_REV);
                vendor >>= 8;
                revision = vendor >> ISL29028_REV_SHIFT;
                vendor &= ISL29028_VENDOR_MASK;
                if (vendor != ISL29028_VENDOR)
                        return -ENODEV;

                device = i2c_smbus_read_word_data(client,
                                                  ISL29028_REG_DEVICE);
                device >>= 8;
                if (device != ISL29028_DEVICE)
                        return -ENODEV;

                if (revision != ISL29028_REV)
                        dev_info(&adapter->dev, "Unknown revision %d\n",
                                 revision);
        } else
                dev_dbg(&adapter->dev, "detection forced\n");

        strlcpy(info->type, "isl29044", I2C_NAME_SIZE);

        return 0;
}

static int
isl29044_probe(struct i2c_client *client, const struct i2c_device_id *id)
{
	int res=0;

	dev_info(&client->dev, "%s: ISL 028 chip found\n", client->name);

 printk(KERN_INFO MODULE_NAME ": %s isl29044 probe call, ID= %s\n",
                        __func__, id->name);
	res = isl_set_default_config(client);
	//msleep(100);
	if (res < 0) {
		//pr_warn("isl29044: set default config failed!!\n");
 printk(KERN_INFO MODULE_NAME ": %s isl29044 set default config failed\n", __func__);
		return -EINVAL;
	}

	res = sysfs_create_group(&client->dev.kobj, &m_isl_gr);
	if (res) {
		//pr_warn("isl29044: device create file failed!!\n");
 printk(KERN_INFO MODULE_NAME ": %s isl29044 device create file failed\n", __func__);
		return -EINVAL;
	}

	last_mod = 0;
	isl_set_mod(client, ISL_MOD_POWERDOWN);
	pm_runtime_enable(&client->dev);

	dev_dbg(&client->dev, "isl29044 probe succeed!\n");

	return res;
}

static int isl29044_remove(struct i2c_client *client)
{
	sysfs_remove_group(&client->dev.kobj, &m_isl_gr);
	__pm_runtime_disable(&client->dev, false);
 printk(KERN_INFO MODULE_NAME ": %s isl29044 remove call, \n", __func__);
	return 0;
}

static struct i2c_device_id isl29044_id[] = {
	{"isl29044", 0},
	{}
};

static int isl29044_runtime_suspend(struct device *dev)
{
	struct i2c_client *client = to_i2c_client(dev);
	dev_dbg(dev, "suspend\n");
	isl_set_mod(client, ISL_MOD_POWERDOWN);
 printk(KERN_INFO MODULE_NAME ": %s isl29044 suspend call, \n", __func__);
	return 0;
}

static int isl29044_runtime_resume(struct device *dev)
{
	struct i2c_client *client = to_i2c_client(dev);
	dev_dbg(dev, "resume\n");
	isl_set_mod(client, last_mod);
	msleep(100);
 printk(KERN_INFO MODULE_NAME ": %s isl29044 resume call, \n", __func__);
	return 0;
}

MODULE_DEVICE_TABLE(i2c, isl29044_id);

static const struct dev_pm_ops isl29044_pm_ops = {
	.runtime_suspend = isl29044_runtime_suspend,
	.runtime_resume = isl29044_runtime_resume,
};

static struct i2c_driver isl29044_driver = {
	.driver = {
		   .name = "isl29044",
		   .pm = &isl29044_pm_ops,
		   },
	.probe = isl29044_probe,
	.remove = isl29044_remove,
	.id_table = isl29044_id,
	.detect         = isl29044_detect,
	//.address_data   = &addr_data,
};

static int __init sensor_isl29044_init(void)
{
 printk(KERN_INFO MODULE_NAME ": %s isl29044 init call, \n", __func__);
	return i2c_add_driver(&isl29044_driver);
}

static void __exit sensor_isl29044_exit(void)
{
 printk(KERN_INFO MODULE_NAME ": %s isl29044 exit call \n", __func__);
	i2c_del_driver(&isl29044_driver);
}

module_init(sensor_isl29044_init);
module_exit(sensor_isl29044_exit);

MODULE_AUTHOR("mdigioia");
MODULE_ALIAS("isl29044 ALS/PS");
MODULE_DESCRIPTION("Intersil isl29044 ALS/PS Driver");
MODULE_LICENSE("GPL v2");

