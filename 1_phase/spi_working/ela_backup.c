//.......................HEADERS........................................
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


#define SPI_BUS 1
#define SPI_BUS_CS1 1
#define SPI_BUS_SPEED 1000000


const char this_driver_name[] = "elango";


struct elango_dev {
        struct semaphore spi_sem;
        struct semaphore fop_sem;
        dev_t devt;
//      struct cdev cdev;
        struct class *class;
        struct spi_device *spi_device;
        char *user_buff;
        u8 test_data;

};

static struct elango_dev elango_dev;

static struct spi_driver elango_driver = {
        .driver = {
                .name = this_driver_name,
                .owner = THIS_MODULE,
        },

//        .probe = elango_probe,
//        .remove = __devexit_p(elango_remove),

};


struct elango_control {
        struct spi_message msg;
        struct spi_transfer transfer;
        u8 *tx_buff;
        u8 *rx_buff;
};

static struct elango_control elango_ctl;

static void elango_prepare_spi_message(void)
{

         spi_message_init(&elango_ctl.msg);
         // put some changing values in tx_buff for testing 
         elango_ctl.tx_buff[0] = 1;
         elango_ctl.tx_buff[1] = 2;
         elango_ctl.tx_buff[2] = 9;
         elango_ctl.tx_buff[3] = elango_dev.test_data++;
         //memset(spike_ctl.rx_buff, 0, SPI_BUFF_SIZE);
         elango_ctl.transfer.tx_buf = elango_ctl.tx_buff;
         //spike_ctl.transfer.rx_buf = spike_ctl.rx_buff;
         elango_ctl.transfer.len = 4;
         spi_message_add_tail(&elango_ctl.transfer, &elango_ctl.msg);

}


static int elango_do_one_message(void)
{
        int status;
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
        return status;
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

        // Check whether this SPI bus.cs is already claimed 
        snprintf(buff, sizeof(buff), "%s.%u",
                        dev_name(&spi_device->master->dev),
                        spi_device->chip_select);

       pdev = bus_find_device_by_name(spi_device->dev.bus, NULL, buff);
        if (pdev) {
                // We are not going to use this spi_device, so free it 
                spi_dev_put(spi_device);
                
                // * There is already a device configured for this bus.cs  
                // * It is okay if it us, otherwise complain and fail.
                // 
                if (pdev->driver && pdev->driver->name &&
                                strcmp(this_driver_name, pdev->driver->name)) {
                        printk(KERN_ALERT
                                "Driver [%s] already registered for %s\n",
                                pdev->driver->name, buff);
                        status = -1;
                }
        } else {
                spi_device->max_speed_hz = SPI_BUS_SPEED;
                spi_device->mode = SPI_MODE_0;
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


static  ssize_t dev_read(struct file *filp,char *buff,size_t len,loff_t *off)
{

//*******************************   spi  ******************************************


spi_register_driver(&elango_driver);

add_elango_device_to_bus();



memset(&elango_driver, 0, sizeof(elango_driver));


//-------------------------------xxxxxxxxxxxxxxxx--------------------------------
short  count=0;
printk(KERN_ALERT "ENTERING  THE  LOOP...\n");
int j=350;
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

return count; 

}


//                       ************xxxx*************
//.........................ATTRIBUTES OF MODULE............................

MODULE_LICENSE("GPL");                     // TO AVOID KERNEL TAINT WARNING
MODULE_DESCRIPTION("CHARACTER_DEVICE_DRIVER_DEMO_ELANGO");
MODULE_AUTHOR("ELANGO_79");


//................variable initializations...............................

static char msg[100]={0};
static short readpos=0;
int s=0;
int k=0;
int num;
int fd;

//.......................................................................

static int dev_open(struct inode * ,struct file * );
static int dev_rls(struct inode * , struct file *);
static ssize_t dev_read(struct file * ,char * ,size_t ,loff_t *);
static ssize_t dev_write(struct file * ,const char  * ,size_t ,loff_t *);

static int device_ioctl(struct inode *, struct file *, unsigned int , unsigned long );



//..........................................................................
/*

static irqreturn_t irq_handler(int num, void *dev_id,struct pt_regs *regs)
{
static int f=1;
printk(KERN_ALERT ,"IN ISR.......\n");
if(f==1)
{
gpio_direction_output(49,1);
--f;
}
else
{
gpio_direction_output(49,0);
++f;
}
return IRQ_HANDLED;
}
*/

//...................structure for file operations.........................


static struct file_operations fops =
{

.read=dev_read,
.open=dev_open,
.write=dev_write,
.release=dev_rls,


};







//..........INIT MODULE .........(CALLED WHEN MODULE IS LOADED)....LIKE MAIN

int init_module(void)
{
int t;

t=register_chrdev(79,"elango",&fops);  //registers driver with major number 79

if(t<0)
{
printk(KERN_ALERT "DEVICE REGISTRATION FAILED....\n");
}
else
{
printk(KERN_ALERT "DEVICE REGISTERED SUCCESSFULLY....\n");
return t;
}




/*
j= class_create(THIS_MODULE, "elango");

device_create(j, NULL, MKDEV(79,0), NULL, "elango");
    printk("\n Device Initialized in kernel ....!!!");


return t;

*/


}

//.................cleanup module..............

void cleanup_module(void)
{

unregister_chrdev(79,"elango");
printk(KERN_ALERT "DEVICE UNREGISTERED.....BYE.....:)\n");

/*
free_irq(num,NULL);
gpio_free(115);
 */

}


//.......function to be called when open system call is used on the device file.......

static int dev_open(struct inode *inod,struct file *fil)
{


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

/*
int ret;
num=gpio_to_irq(115);
printk(KERN_ALERT "%d is the interrupt num\n ",num);
ret=request_irq(num, irq_handler , IRQF_TRIGGER_FALLING , "switch1" ,NULL);
if(ret!=0)
{
printk(KERN_ALERT "request irq failed.....\n");
}
else
{
printk(KERN_ALERT "request irq success.....\n");
}
*/

return 0;
}

//.........function to be called when write system call is used on the device file......

static ssize_t dev_write(struct file *filp,const char *buff,size_t len ,loff_t *off)
{

short ind=len-1;
short count=0;

memset(msg,0,100);
readpos=0;

while(len>0)
{

 msg[count++]=buff[ind--];
 len--;
 
}
printk(KERN_ALERT "DATA WRITTEN TO THE CHARTER DEVICE FILE.... /dev/elango.. \n");

return count;
}

//...........function to br called when close system call is used on the device file....

static int dev_rls(struct inode *inod,struct file *fil)
{
//printk(KERN_ALERT " DEVICE CLOSED SUCCESSFULLY...\n");
return 0;
}
