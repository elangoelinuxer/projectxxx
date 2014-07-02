
//.........................HEADERS........................................
#include<linux/module.h>
#include<linux/string.h>
#include<linux/fs.h>
#include<linux/uaccess.h>




//.........................ATTRIBUTES OF MODULE............................

MODULE_LICENSE("GPL");   // TO AVOID KERNEL TAINT WARNING
MODULE_DESCRIPTION("CHARACTER_DEVICE_DRIVER_DEMO_ELANGO");
MODULE_AUTHOR("ELANGO_SWT");


//................variable initializations...............................

static char msg[100]={0};
static short readpos=0;
static int times=0;

//

static int dev_open(struct inode * ,struct file * );
static int dev_rls(struct inode * , struct file *);

static ssize_t dev_read(struct file * ,char * ,size_t ,loff_t *);

static ssize_t dev_write(struct file * ,const char  * ,size_t ,loff_t *);





//......................structure for file operations.................................


static struct file_operations fops =
{

.read=dev_read,
.open=dev_open,
.write=dev_write,
.release=dev_rls,


};




//.........................INIT MODULE .........(CALLED WHEN MODULE IS LOADED)....LIKE MAIN

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
 

}


//.......function to be called when open system call is used on the device file.......


static int dev_open(struct inode *inod,struct file *fil)
{

times++;

printk(KERN_ALERT "DEVICE OPENED FOR %d TIMES...\n",times);

return 0;

}

// .........function to be called when read system call is used on the device file......

static  ssize_t dev_read(struct file *filp,char *buff,size_t len,loff_t *off)
{
        
short  count=0;

while(len && (msg[readpos]!=0))
{

       put_user(msg[readpos],buff++);
       count++;
       len--;
       readpos++;

}

printk(KERN_ALERT " DATA READ FROM DEVICE FILE AND DISPLAYED ON TERMINAL .....:) \n");

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

printk(KERN_ALERT " DEVICE CLOSED SUCCESSFULLY...\n");
return 0;

}






















































