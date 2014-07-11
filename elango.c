//-----------------------------------------------------------------------------------

#include<linux/module.h>
#include<linux/string.h>
#include<linux/fs.h>
#include<linux/uaccess.h>
#include<linux/gpio.h>
#include<linux/interrupt.h>
#include<linux/irq.h>
#include<linux/init.h>
#include<linux/io.h>
#include<linux/irqdomain.h>
#include<linux/of.h>
#include<linux/of_address.h>
#include<linux/delay.h>
#include<linux/types.h>
#include<linux/spi/spidev.h>
#include<linux/ioctl.h>
#include<linux/fcntl.h>
#include<linux/unistd.h>
#include <linux/kdev_t.h>
#include <linux/spi/spi.h>
#include <linux/of_device.h>
#include <linux/device.h>
#include "motor.h"

#include "new.h"

// ---------------------------------------------------------------------------------


#include <linux/init.h>
#include <linux/device.h>
#include <linux/mutex.h>
#include <linux/slab.h>
#include <linux/cdev.h>
#include <linux/spi/spi.h>
#include <linux/string.h>
//#include <asm/uaccess.h>

#define SPI_BUFF_SIZE	128
#define USER_BUFF_SIZE	128

#define SPI_BUS 1
#define SPI_BUS_CS1 0
#define SPI_BUS_SPEED 1000000

//#define SPI_CS_HIGH	0x04
//#define SPI_LSB_FIRST	0x08

const char this_driver_name[] = "elango";

struct elango_control {
	struct spi_message msg;
	struct spi_transfer transfer;
	u8 *tx_buff; 
	u8 *rx_buff;
};

 struct elango_control elango_ctl;

struct elango_dev {
	struct semaphore spi_sem;
	struct semaphore fop_sem;
	dev_t devt;
	struct cdev cdev;
	struct class *class;
	struct spi_device *spi_device;
	char *user_buff;
	u8 test_data;	
};

 struct elango_dev elango_dev;

u8 tmp[48],tmp1[48];
char **buff;
int length;
int i,j,k,m,s=0;


static void elango_prepare_spi_message()
{

//--------------motor-----------------------------------

gpio_request(48,"led1");     // requesting the pin48 of gpio
gpio_export(48,true);       // exporting it to the sysfs entry

gpio_request(49,"led2");
gpio_export(49,true);

gpio_request(60,"led3");     // requesting the pin60 of gpio
gpio_export(60,true);       // exporting it to the sysfs entry

gpio_request(115,"led4");
gpio_export(115,true);

gpio_request(117,"enable");
gpio_export(117,true);

gpio_request(45,"strobe1&2");
gpio_export(45,true);

gpio_request(44,"strobe3&4");
gpio_export(44,true);

gpio_request(26,"strobe5&6");
gpio_export(26,true);


//-------------------------xxxxxxxxxxxxxxxxxxxxxx--------------------
  	 spi_message_init(&elango_ctl.msg);
	 /* put some changing values in tx_buff for testing */	
//...................................................................

elango_dev.spi_device->bits_per_word=8;

tmp1[0]=0xff;

int g[48+length],l=40,lencheck=0;

u32 *addr=&tmp;
u32 *addr1=&tmp1;

ela:

gpio_direction_output(45,1);
gpio_direction_output(44,1);
gpio_direction_output(26,1);

for(k=0;k<48;k++)
{
++lencheck;
if((k<(length-1)) && lencheck<(length) )
{
g[k]=(**(buff))-32;
++(*buff);
}
else
{
g[k]=0;
}

if(g[k]==32)
{
g[k]=0;
}
}


for(i=0;i<26;i++)
{
m=0;

//tmp[0]=tamil[m][i];
//tmp[1]=tamil[++m][i];
//tmp[2]=tamil[++m][i];

tmp[0]=0xff;
tmp[0]=0xff;
tmp[0]=0xff;


tmp[3]=tamil[++m][i];
tmp[4]=tamil[++m][i];
tmp[5]=tamil[++m][i];
tmp[6]=tamil[++m][i];
tmp[7]=tamil[++m][i];
tmp[8]=tamil[++m][i];
tmp[9]=tamil[++m][i];
tmp[10]=tamil[++m][i];
tmp[11]=tamil[++m][i];
tmp[12]=tamil[++m][i];
tmp[13]=tamil[++m][i];
tmp[14]=tamil[++m][i];
tmp[15]=tamil[++m][i];
tmp[16]=tamil[++m][i];
tmp[17]=tamil[++m][i];
tmp[18]=tamil[++m][i];
tmp[19]=tamil[++m][i];
tmp[20]=tamil[++m][i];
tmp[21]=tamil[++m][i];
tmp[22]=tamil[++m][i];
tmp[23]=tamil[++m][i];
tmp[24]=tamil[++m][i];
tmp[25]=tamil[++m][i];
tmp[26]=tamil[++m][i];
tmp[27]=tamil[++m][i];
tmp[28]=tamil[++m][i];
tmp[29]=tamil[++m][i];
tmp[30]=tamil[++m][i];
tmp[31]=tamil[++m][i];
tmp[32]=tamil[++m][i];
tmp[33]=tamil[++m][i];
tmp[34]=tamil[++m][i];
tmp[35]=tamil[++m][i];
tmp[36]=tamil[++m][i];
tmp[37]=tamil[++m][i];
tmp[38]=tamil[++m][i];
tmp[39]=tamil[++m][i];
tmp[40]=tamil[++m][i];
tmp[41]=tamil[++m][i];
tmp[42]=tamil[++m][i];
tmp[43]=tamil[++m][i];
tmp[44]=tamil[++m][i];
tmp[45]=tamil[++m][i];
tmp[46]=tamil[++m][i];
tmp[47]=tamil[++m][i];

spi_write(elango_dev.spi_device, addr, 48);

rotate();

}

s++;


for(i=0;i<48;i++)
{
tmp[i]=0;
}
spi_write(elango_dev.spi_device, addr, 48);

rotate();
rotate();
rotate();
rotate();
rotate();
rotate();

if(lencheck<length)
{
goto ela;
}

gpio_direction_output(45,0);
gpio_direction_output(44,0);
gpio_direction_output(26,0);

spi_message_add_tail(&elango_ctl.transfer, &elango_ctl.msg);
//-----------------------------------------------------------------------------------


}





static ssize_t elango_write(struct file* F, const char *buf, size_t count, loff_t *f_pos)
{

buff=&buf;
length=count;

ssize_t status = 0;


	
        if (down_interruptible(&elango_dev.spi_sem))
		return -ERESTARTSYS;

	if (!elango_dev.spi_device) 
        {
		up(&elango_dev.spi_sem);
		return -ENODEV;
	}

	elango_prepare_spi_message();

	status = spi_sync(elango_dev.spi_device, &elango_ctl.msg);
	up(&elango_dev.spi_sem);

//-----------------------------------------------------------------------------------------
	/* write data to the buffer */

	if ( copy_from_user(elango_dev.user_buff, buf, count) ) 
        {
         return -EFAULT;
        }

if (status) 
	  {
		sprintf(elango_dev.user_buff, 
		"elango_do_one_message failed : %d\n",
		 status);
	
            }
	else 
        {
		sprintf(elango_dev.user_buff, 
		"Status: %d\n printing ..........  \n");	
	}
		
up(&elango_dev.fop_sem);
return count;


}


static ssize_t elango_read(struct file *filp, char __user *buff, size_t count,
			loff_t *offp)
{
	
        size_t len;
	ssize_t status = 0;

	if (!buff) 
		return -EFAULT;

	if (*offp > 0) 
		return 0;

	if (down_interruptible(&elango_dev.fop_sem)) 
		return -ERESTARTSYS;

/*
      	status = elango_do_one_message();

	if (status) 
        {
		sprintf(elango_dev.user_buff, 
			"elango_do_one_message failed : %d\n",
			status);
	}

	else 
        {
		sprintf(elango_dev.user_buff, 
			"Status: %d\n printing ..........  \n");
		
	}

*/
		
	len = strlen(elango_dev.user_buff);
 
	if (len < count) 
		count = len;

	if (copy_to_user(buff, elango_dev.user_buff, count))  {
		printk(KERN_ALERT "elango_read(): copy_to_user() failed\n");
		status = -EFAULT;
	} else {
		*offp += count;
		status = count;
	}

	up(&elango_dev.fop_sem);
	return status;	
}




static int elango_open(struct inode *inode, struct file *filp)
{	
	int status = 0;

	if (down_interruptible(&elango_dev.fop_sem)) 
		return -ERESTARTSYS;

	if (!elango_dev.user_buff) 
        {
		elango_dev.user_buff = kmalloc(USER_BUFF_SIZE, GFP_KERNEL);
		if (!elango_dev.user_buff) 
			status = -ENOMEM;
	}	

	up(&elango_dev.fop_sem);

	return status;
}

static int elango_probe(struct spi_device *spi_device)
{
	if (down_interruptible(&elango_dev.spi_sem))
		return -EBUSY;

	elango_dev.spi_device = spi_device;

	up(&elango_dev.spi_sem);

	return 0;
}

static int elango_remove(struct spi_device *spi_device)
{
	if (down_interruptible(&elango_dev.spi_sem))
		return -EBUSY;
	
	elango_dev.spi_device = NULL;

	up(&elango_dev.spi_sem);

	return 0;
}


static int __init add_elango_device_to_bus(void)
{
	struct spi_master *spi_master;
	struct spi_device *spi_device;
	struct device *pdev;
	char buff[64];
	int status = 0;

	spi_master = spi_busnum_to_master(SPI_BUS);
	if (!spi_master) {
		printk(KERN_ALERT "spi_busnum_to_master(%d) returned NULL\n",
			SPI_BUS);
		printk(KERN_ALERT "Missing modprobe omap2_mcspi?\n");
		return -1;
	}

	spi_device = spi_alloc_device(spi_master);
	if (!spi_device) {
		put_device(&spi_master->dev);
		printk(KERN_ALERT "spi_alloc_device() failed\n");
		return -1;
	}

	spi_device->chip_select = SPI_BUS_CS1;

	/* Check whether this SPI bus.cs is already claimed */
	snprintf(buff, sizeof(buff), "%s.%u", 
			dev_name(&spi_device->master->dev),
			spi_device->chip_select);

	pdev = bus_find_device_by_name(spi_device->dev.bus, NULL, buff);
 	if (pdev) {
		/* We are not going to use this spi_device, so free it */ 
		spi_dev_put(spi_device);
		
		/* 
		 * There is already a device configured for this bus.cs  
		 * It is okay if it us, otherwise complain and fail.
		 */
		if (pdev->driver && pdev->driver->name && 
				strcmp(this_driver_name, pdev->driver->name)) {
			printk(KERN_ALERT 
				"Driver [%s] already registered for %s\n",
				pdev->driver->name, buff);
			status = -1;
		} 
	} else {
		spi_device->max_speed_hz = SPI_BUS_SPEED;
		spi_device->mode = SPI_MODE_3;
		spi_device->bits_per_word = 8;
		spi_device->irq = -1;
		spi_device->controller_state = NULL;
		spi_device->controller_data = NULL;
		strlcpy(spi_device->modalias, this_driver_name, SPI_NAME_SIZE);
		
		status = spi_add_device(spi_device);		
		if (status < 0) {	
			spi_dev_put(spi_device);
			printk(KERN_ALERT "spi_add_device() failed: %d\n", 
				status);		
		}				
	}

	put_device(&spi_master->dev);

	return status;
}

static struct spi_driver elango_driver = {
	.driver = {
		.name =	this_driver_name,
		.owner = THIS_MODULE,
	},
	.probe = elango_probe,
//	.remove = __devexit_p(elango_remove),	

	.remove =elango_remove,	

};

static int __init elango_init_spi(void)
{
	int error;

	elango_ctl.tx_buff = kmalloc(SPI_BUFF_SIZE, GFP_KERNEL | GFP_DMA);
	if (!elango_ctl.tx_buff) {
		error = -ENOMEM;
		goto elango_init_error;
	}

	elango_ctl.rx_buff = kmalloc(SPI_BUFF_SIZE, GFP_KERNEL | GFP_DMA);
	if (!elango_ctl.rx_buff) {
		error = -ENOMEM;
		goto elango_init_error;
	}

	error = spi_register_driver(&elango_driver);
	if (error < 0) {
		printk(KERN_ALERT "spi_register_driver() failed %d\n", error);
		goto elango_init_error;
	}

	error = add_elango_device_to_bus();
	if (error < 0) {
		printk(KERN_ALERT "add_elango_to_bus() failed\n");
		spi_unregister_driver(&elango_driver);
		goto elango_init_error;	
	}

	return 0;

elango_init_error:

	if (elango_ctl.tx_buff) {
		kfree(elango_ctl.tx_buff);
		elango_ctl.tx_buff = 0;
	}

	if (elango_ctl.rx_buff) {
		kfree(elango_ctl.rx_buff);
		elango_ctl.rx_buff = 0;
	}
	
	return error;
}

static const struct file_operations elango_fops = {
	.owner =	THIS_MODULE,
	.read = 	elango_read,
	.open =		elango_open,	
        .write =        elango_write,
     };


static int __init elango_init_cdev(void)
{
	int error;

	elango_dev.devt = MKDEV(0, 0);

	error = alloc_chrdev_region(&elango_dev.devt, 0, 1, this_driver_name);
	if (error < 0) {
		printk(KERN_ALERT "alloc_chrdev_region() failed: %d \n", 
			error);
		return -1;
	}

	cdev_init(&elango_dev.cdev, &elango_fops);
	elango_dev.cdev.owner = THIS_MODULE;
	
	error = cdev_add(&elango_dev.cdev, elango_dev.devt, 1);
	if (error) {
		printk(KERN_ALERT "cdev_add() failed: %d\n", error);
		unregister_chrdev_region(elango_dev.devt, 1);
		return -1;
	}	

	return 0;
}

static int __init elango_init_class(void)
{
	elango_dev.class = class_create(THIS_MODULE, this_driver_name);

	if (!elango_dev.class) {
		printk(KERN_ALERT "class_create() failed\n");
		return -1;
	}

	if (!device_create(elango_dev.class, NULL, elango_dev.devt, NULL, 	
			this_driver_name)) {
		printk(KERN_ALERT "device_create(..., %s) failed\n",
			this_driver_name);
		class_destroy(elango_dev.class);
		return -1;
	}
	return 0;
}

static int __init elango_init(void)
{
	memset(&elango_dev, 0, sizeof(elango_dev));
	memset(&elango_ctl, 0, sizeof(elango_ctl));

	sema_init(&elango_dev.spi_sem, 1);
	sema_init(&elango_dev.fop_sem, 1);
	
	if (elango_init_cdev() < 0) 
		goto fail_1;
	
	if (elango_init_class() < 0)  
		goto fail_2;

	if (elango_init_spi() < 0) 
		goto fail_3;

	return 0;

fail_3:
	device_destroy(elango_dev.class, elango_dev.devt);
	class_destroy(elango_dev.class);

fail_2:
	cdev_del(&elango_dev.cdev);
	unregister_chrdev_region(elango_dev.devt, 1);

fail_1:
	return -1;
}
module_init(elango_init);

static void __exit elango_exit(void)
{
	spi_unregister_device(elango_dev.spi_device);
	spi_unregister_driver(&elango_driver);

	device_destroy(elango_dev.class, elango_dev.devt);
	class_destroy(elango_dev.class);

	cdev_del(&elango_dev.cdev);
	unregister_chrdev_region(elango_dev.devt, 1);

	if (elango_ctl.tx_buff)
		kfree(elango_ctl.tx_buff);

	if (elango_ctl.rx_buff)
		kfree(elango_ctl.rx_buff);

	if (elango_dev.user_buff)
		kfree(elango_dev.user_buff);
}
module_exit(elango_exit);

MODULE_AUTHOR("elango");
MODULE_DESCRIPTION("elango module - an example SPI driver");
MODULE_LICENSE("GPL");
MODULE_VERSION("0.2");

