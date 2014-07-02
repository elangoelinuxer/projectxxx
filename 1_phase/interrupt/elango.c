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

//.........................ATTRIBUTES OF MODULE............................

MODULE_LICENSE("GPL");                     // TO AVOID KERNEL TAINT WARNING
MODULE_DESCRIPTION("CHARACTER_DEVICE_DRIVER_DEMO_ELANGO");
MODULE_AUTHOR("ELANGO_79");

//................variable initializations...............................

static char msg[100]={0};
static short readpos=0;
static int times=0;
int s=0;
int k=0;
int num;

//.......................................................................

static int dev_open(struct inode * ,struct file * );

static int dev_rls(struct inode * , struct file *);

static ssize_t dev_read(struct file * ,char * ,size_t ,loff_t *);

static ssize_t dev_write(struct file * ,const char  * ,size_t ,loff_t *);

//..........................................................................


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

}


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

}

//.................cleanup module..............

void cleanup_module(void)
{

unregister_chrdev(79,"elango");
printk(KERN_ALERT "DEVICE UNREGISTERED.....BYE.....:)\n");


free_irq(num,NULL);
gpio_free(115);
 
}

//.......function to be called when open system call is used on the device file.......

static int dev_open(struct inode *inod,struct file *fil)
{

gpio_request(60,"led1");     // requesting the pin60 of gpio
gpio_export(60,true);       // exporting it to the sysfs entry

gpio_request(115,"switch");
gpio_export(115,true);


gpio_direction_input(115);


gpio_request(49,"led2");
gpio_export(49,true);


gpio_direction_output(49,0);

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

return 0;

}

static  ssize_t dev_read(struct file *filp,char *buff,size_t len,loff_t *off)
{
       
short  count=0;

printk(KERN_ALERT "ENTERING  THE  LOOP...\n");

int j=20;


// gpio_direction_output(49,1);  

while(j>0)
{

gpio_direction_output(60,1);

for(s=0;s<19900000;s++);

gpio_direction_output(60,0);

for(s=0;s<19900000;s++);

j--;

}

return count;

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
