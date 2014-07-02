
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


//---------------------------------------------------------------------------------
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


 void data(void)
{

u32 word[12];

word[0]=2147483647;
spi_write(elango_dev.spi_device, &word[0], sizeof(word[0]));


//....2.....

word[1]=0;
spi_write(elango_dev.spi_device, &word[1], sizeof(word[1]));	

//...3......

word[2]=0;
spi_write(elango_dev.spi_device, &word[2], sizeof(word[2]));	

//....4.....


word[3]=0;
spi_write(elango_dev.spi_device, &word[3], sizeof(word[3]));	

//.....5........

word[4]=0;
spi_write(elango_dev.spi_device, &word[4], sizeof(word[4]));	

//......6.......

word[5]=0;
spi_write(elango_dev.spi_device, &word[5], sizeof(word[5]));

//.......7........
word[6]=0;
spi_write(elango_dev.spi_device, &word[6], sizeof(word[6]));


//......8...........

word[7]=0;
spi_write(elango_dev.spi_device, &word[7], sizeof(word[7]));

//........9...........

word[8]=0;
spi_write(elango_dev.spi_device, &word[8], sizeof(word[8]));

//........10..........

word[9]=0;
spi_write(elango_dev.spi_device, &word[9], sizeof(word[9]));

//.........11.........
	
word[10]=0;
spi_write(elango_dev.spi_device, &word[10], sizeof(word[10]));

//..........12.......


word[11]=0;
spi_write(elango_dev.spi_device, &word[11], sizeof(word[11]));




}

static void rotate(void)
{

int j=3;
gpio_direction_output(117,1);
while(j>0)
{

gpio_direction_output(60,1);
gpio_direction_output(48,1);
gpio_direction_output(49,0);
gpio_direction_output(115,0);

mdelay(2);

gpio_direction_output(60,0);
gpio_direction_output(48,1);
gpio_direction_output(49,1);
gpio_direction_output(115,0);

mdelay(2);

gpio_direction_output(60,0);
gpio_direction_output(48,0);
gpio_direction_output(49,1);
gpio_direction_output(115,1);

mdelay(2);

gpio_direction_output(60,1);
gpio_direction_output(48,0);
gpio_direction_output(49,0);
gpio_direction_output(115,1);

mdelay(2);

j--;

}

gpio_direction_output(117,0);

}



static void elango_prepare_spi_message(void)
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

//-------------------------xxxxxxxxxxxxxxxxxxxxxx--------------------

  	spi_message_init(&elango_ctl.msg);

	/* put some changing values in tx_buff for testing */	


//.......................................................................

data();
rotate();


/*
//...1....
 
u32 *word;


word=2147483647;
spi_write(elango_dev.spi_device, &word, sizeof(word));


//....2.....

word=2147483647;
spi_write(elango_dev.spi_device, &word, sizeof(word));	

//...3......

word=2147483647;
spi_write(elango_dev.spi_device, &word, sizeof(word));	

//....4.....


word=2147483647;
spi_write(elango_dev.spi_device, &word, sizeof(word));	

//.....5........

word=2147483647;
spi_write(elango_dev.spi_device, &word, sizeof(word));	

//......6.......

word=2147483647;
spi_write(elango_dev.spi_device, &word, sizeof(word));

//.......7........
word=2147483647;
spi_write(elango_dev.spi_device, &word, sizeof(word));


//......8...........

word=2147483647;
spi_write(elango_dev.spi_device, &word, sizeof(word));

//........9...........

word=2147483647;
spi_write(elango_dev.spi_device, &word, sizeof(word));

//........10..........

word=2147483647;
spi_write(elango_dev.spi_device, &word, sizeof(word));

//.........11.........
	
word=2147483647;
spi_write(elango_dev.spi_device, &word, sizeof(word));

//..........12.......


word=2147483647;
spi_write(elango_dev.spi_device, &word, sizeof(word));
rotate();

*/



//........................................................................

//	elango_ctl.tx_buff[2] = elango_dev.test_data++;
//	elango_ctl.tx_buff[3] = elango_dev.test_data++;


	memset(elango_ctl.rx_buff, 0, SPI_BUFF_SIZE);

	elango_ctl.transfer.tx_buf = elango_ctl.tx_buff;
	elango_ctl.transfer.rx_buf = elango_ctl.rx_buff;
	elango_ctl.transfer.len = 48;

	spi_message_add_tail(&elango_ctl.transfer, &elango_ctl.msg);

mdelay(4);

//---------------------------

//---------------------------

}

static int elango_do_one_message(void)
{
	int status;

	if (down_interruptible(&elango_dev.spi_sem))
		return -ERESTARTSYS;

	if (!elango_dev.spi_device) {
		up(&elango_dev.spi_sem);
		return -ENODEV;
	}

	elango_prepare_spi_message();

	status = spi_sync(elango_dev.spi_device, &elango_ctl.msg);
	
	up(&elango_dev.spi_sem);

	return status;	
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

	status = elango_do_one_message();

	if (status) {
		sprintf(elango_dev.user_buff, 
			"elango_do_one_message failed : %d\n",
			status);
	}
	else {
		sprintf(elango_dev.user_buff, 
			"Status: %d\n printing ..........  \n");
		
                 //	elango_ctl.tx_buff[0],
               //         elango_ctl.tx_buff[1], 
		//	elango_ctl.tx_buff[2],
                  //      elango_ctl.tx_buff[3],
		//	elango_ctl.rx_buff[0],
                 //       elango_ctl.rx_buff[1]);
		//	elango_ctl.rx_buff[2],
                  //     elango_ctl.rx_buff[3]);
	}
		
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

	if (!elango_dev.user_buff) {
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

