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
#include "tamil.h"
#include "arial_bold_10.h"
#include "times_8.h"
#include "bmp.h"
#include "bmp_length.h"
#include "image.h"
#include "tamil_string_conv.h"


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

//#define SPI_CS_HIGH	0x04
//#define SPI_LSB_FIRST	0x08

const char this_driver_name[] = "elango";

struct elango_control
{
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

char **buff;
int length;
u8 tmp1[48];
int i,j,k,m,s=0;
u8 tmp[48];
u32 *addr=&tmp;
u32 *addr1=&tmp1;
int g[2000],l=40,lencheck=0;
int var_1=0,var_2=0,z=1;
int a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16,a17,a18,a19,a20,a21,a22,a23,a24;
int a25,a26,a27,a28,a29,a30,a31,a32,a33,a34,a35,a36,a37,a38,a39,a40,a41,a42,a43,a44,a45,a46,a47;  




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


gpio_direction_output(45,1);
gpio_direction_output(44,1);
gpio_direction_output(26,1);


elango_dev.spi_device->bits_per_word=8;


tmp[0]=tmp[1]=tmp[2]=tmp[3]=tmp[4]=tmp[5]=tmp[6]=tmp[7]=tmp[8]=tmp[9]=tmp[10]=tmp[11]=tmp[12]=tmp[13]=tmp[14]=tmp[15]=tmp[16]=tmp[17]=tmp[18]=tmp[19]=tmp[20]=tmp[21]=tmp[22]=tmp[23]=tmp[24]=tmp[25]=tmp[26]=tmp[27]=tmp[28]=tmp[29]=tmp[30]=tmp[31]=tmp[32]=tmp[33]=tmp[34]=tmp[35]=tmp[36]=tmp[37]=tmp[38]=tmp[39]=tmp[40]=tmp[41]=tmp[42]=tmp[43]=tmp[44]=tmp[45]=tmp[46]=tmp[47]=0;


printk(KERN_ALERT "length is ...........   %d  \n",length);

for(k=0;k<=1;k++)
{

g[k]=(**(buff))-32;
++(*buff);

}



//-----------------------------------------------------------------



if(g[0]==94)
{
//printk(KERN_ALERT "1111...sucesss g[0]....%d \n",g[0]);

switch(g[1])
{

case 66:

//############################# bmp printing ##############################

printk(KERN_ALERT "bmp....g[0] %d \n",g[0]);
printk(KERN_ALERT "bmp....g[1] %d \n",g[1]);

g[2]=(**(buff))-32;
++(*buff);
g[3]=(**(buff))-32;
++(*buff);

for(k=4;k<=99;k++)
{
g[k]=0;
}

/////////////////////

//function call to set  "var_1"  variable


bmp_length();

/////////////////////


printk(KERN_ALERT "in main program.....01...%d \n",var_1);


////////////////////

for(k=4;k<=99;k++)
{

++lencheck;
++var_2;

if(lencheck<=var_1)
{

g[k]=(**(buff))-32;
++(*buff);

}
else
{

g[k]=0;

}

}

ela1:

if(z==0)
{

for(k=4;k<=99;k++)
{

g[k]=0;

}

for(k=4;k<=99;k++)
{

++lencheck;

++var_2;

if(lencheck<=var_1)
{

g[k]=(**(buff))-32;
++(*buff);

}
else
{

g[k]=0;

}

}

}

z=0;

gpio_direction_output(45,1);
gpio_direction_output(44,1);
gpio_direction_output(26,1);

printk(KERN_ALERT "bmp....g[2] %d \n",g[2]);
printk(KERN_ALERT "bmp....g[3] %d \n \n \n",g[3]);
printk(KERN_ALERT "bmp....g[4] %d \n",g[4]);
printk(KERN_ALERT "bmp....g[5] %d \n",g[5]);
printk(KERN_ALERT "var_1...... %d \n",var_1);

bmp_conv();

//tmp[0]=0xff;

printk(KERN_ALERT "tmp[0].......%d \n",tmp[0]);

spi_write(elango_dev.spi_device, addr, 48);

rotate();

gpio_direction_output(45,0);
gpio_direction_output(44,0);
gpio_direction_output(26,0);


tmp[0]=tmp[1]=tmp[2]=tmp[3]=tmp[4]=tmp[5]=tmp[6]=tmp[7]=tmp[8]=tmp[9]=tmp[10]=tmp[11]=tmp[12]=tmp[13]=tmp[14]=tmp[15]=tmp[16]=tmp[17]=tmp[18]=tmp[19]=tmp[20]=tmp[21]=tmp[22]=tmp[23]=tmp[24]=tmp[25]=tmp[26]=tmp[27]=tmp[28]=tmp[29]=tmp[30]=tmp[31]=tmp[32]=tmp[33]=tmp[34]=tmp[35]=tmp[36]=tmp[37]=tmp[38]=tmp[39]=tmp[40]=tmp[41]=tmp[42]=tmp[43]=tmp[44]=tmp[45]=tmp[46]=tmp[47]=0;

lencheck=0;

if(var_2<960)
{
goto ela1;
}

//########################## end of bmp ##########################################

break;

case 84:  

//################################   tamil printing   ###############################

/*

for(k=0;k<143;k++)
{
g[k]=16;
}

*/

tmp[0]=tmp[1]=tmp[2]=tmp[3]=tmp[4]=tmp[5]=tmp[6]=tmp[7]=tmp[8]=tmp[9]=tmp[10]=tmp[11]=tmp[12]=tmp[13]=tmp[14]=tmp[15]=tmp[16]=tmp[17]=tmp[18]=tmp[19]=tmp[20]=tmp[21]=tmp[22]=tmp[23]=tmp[24]=tmp[25]=tmp[26]=tmp[27]=tmp[28]=tmp[29]=tmp[30]=tmp[31]=tmp[32]=tmp[33]=tmp[34]=tmp[35]=tmp[36]=tmp[37]=tmp[38]=tmp[39]=tmp[40]=tmp[41]=tmp[42]=tmp[43]=tmp[44]=tmp[45]=tmp[46]=tmp[47]=0;


for(k=2;k<194;k++)
{


if(k<=(length-2))
{
g[k]=(**(buff))-32;
++(*buff);
}
else
{
g[k]=16;   // ascii of 0
}

}

printk(KERN_ALERT  "bfr conv....g[151] %d \n",g[151]);
printk(KERN_ALERT  "bfr conv....g[152] %d \n",g[152]);
printk(KERN_ALERT  "bfr conv....g[153] %d \n",g[153]);

printk(KERN_ALERT "bfr conv ....a37 %d \n",a37);


printk(KERN_ALERT "inside switch...tamil printing...........\n");

conversion();

///testing .....................

printk(KERN_ALERT "count is ...........   %d  \n",length);

/*

printk(KERN_ALERT "....g[2] %d \n",g[2]);

printk(KERN_ALERT "....g[3] %d \n",g[3]);
printk(KERN_ALERT "....g[4] %d \n",g[4]);
printk(KERN_ALERT "....g[5] %d \n",g[5]);
printk(KERN_ALERT "....g[6] %d \n",g[6]);
printk(KERN_ALERT "....g[7] %d \n",g[7]);
printk(KERN_ALERT "....g[8] %d \n",g[8]);
printk(KERN_ALERT "....g[9] %d \n",g[9]);
printk(KERN_ALERT "....g[10] %d \n",g[10]);
printk(KERN_ALERT "....g[11] %d \n",g[11]);
printk(KERN_ALERT "....g[12] %d \n",g[12]);
printk(KERN_ALERT "....g[13] %d \n",g[13]);

*/



printk(KERN_ALERT  "afr conv....g[151] %d \n",g[151]);
printk(KERN_ALERT  "afr conv....g[152] %d \n",g[152]);
printk(KERN_ALERT  "afr conv....g[153] %d \n",g[153]);

printk(KERN_ALERT "afr conv ....a37 %d \n",a37);





/*
//############## a0 ####################3

g[3]=g[3]-16;
g[4]=g[4]-16;
g[5]=g[5]-16;

a0=g[3]*100+g[4]*10+g[5];

//############## a1 #####################

g[7]=g[7]-16;
g[8]=g[8]-16;
g[9]=g[9]-16;

a1=g[7]*100+g[8]*10+g[9];

*/


//..............................



for(i=0;i<26;i++)
{


m=0;
tmp[0]=tamil[a0][i];
tmp[1]=tamil[a1][i];
tmp[2]=tamil[a2][i];
tmp[3]=tamil[a3][i];
tmp[4]=tamil[a4][i];
tmp[5]=tamil[a5][i];
tmp[6]=tamil[a6][i];
tmp[7]=tamil[a7][i];
tmp[8]=tamil[a8][i];
tmp[9]=tamil[a9][i];
tmp[10]=tamil[a10][i];
tmp[11]=tamil[a11][i];
tmp[12]=tamil[a12][i];
tmp[13]=tamil[a13][i];
tmp[14]=tamil[a14][i];
tmp[15]=tamil[a15][i];
tmp[16]=tamil[a16][i];
tmp[17]=tamil[a17][i];
tmp[18]=tamil[a18][i];
tmp[19]=tamil[a19][i];
tmp[20]=tamil[a20][i];
tmp[21]=tamil[a21][i];
tmp[22]=tamil[a22][i];
tmp[23]=tamil[a23][i];
tmp[24]=tamil[a24][i];
tmp[25]=tamil[a25][i];
tmp[26]=tamil[a26][i];
tmp[27]=tamil[a27][i];
tmp[28]=tamil[a28][i];
tmp[29]=tamil[a29][i];
tmp[30]=tamil[a30][i];
tmp[31]=tamil[a31][i];
tmp[32]=tamil[a32][i];
tmp[33]=tamil[a33][i];
tmp[34]=tamil[a34][i];
tmp[35]=tamil[a35][i];
tmp[36]=tamil[a36][i];
tmp[37]=tamil[a37][i];
tmp[38]=tamil[a38][i];
tmp[39]=tamil[a39][i];
tmp[40]=tamil[a40][i];
tmp[41]=tamil[a41][i];
tmp[42]=tamil[a42][i];
tmp[43]=tamil[a43][i];
tmp[44]=tamil[a44][i];
tmp[45]=tamil[a45][i];
tmp[46]=tamil[a46][i];
tmp[47]=tamil[a47][i];

//tmp[45]=0x00;
//tmp[46]=0x00;
//tmp[47]=0xff;


spi_write(elango_dev.spi_device, addr, 48);
rotate();

}

spi_write(elango_dev.spi_device, addr, 48);
     
break; 

//############################# end of tamil printing #################################


case 69:

//########################### english printing ########################################

          printk(KERN_ALERT "inside switch....english printing....\n");


ela:

gpio_direction_output(45,1);
gpio_direction_output(44,1);
gpio_direction_output(26,1);

for(k=2;k<50;k++)
{
++lencheck;
if((k<(length-1)) && lencheck<(length-1) )
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


for(i=0;i<16;i++)
{

m=2;

tmp[0]=times[g[m]][i];
tmp[1]=times[g[++m]][i];
tmp[2]=times[g[++m]][i];
tmp[3]=times[g[++m]][i];
tmp[4]=times[g[++m]][i];
tmp[5]=times[g[++m]][i];
tmp[6]=times[g[++m]][i];
tmp[7]=times[g[++m]][i];
tmp[8]=times[g[++m]][i];
tmp[9]=times[g[++m]][i];
tmp[10]=times[g[++m]][i];
tmp[11]=times[g[++m]][i];
tmp[12]=times[g[++m]][i];
tmp[13]=times[g[++m]][i];
tmp[14]=times[g[++m]][i];
tmp[15]=times[g[++m]][i];
tmp[16]=times[g[++m]][i];
tmp[17]=times[g[++m]][i];
tmp[18]=times[g[++m]][i];
tmp[19]=times[g[++m]][i];
tmp[20]=times[g[++m]][i];
tmp[21]=times[g[++m]][i];
tmp[22]=times[g[++m]][i];
tmp[23]=times[g[++m]][i];
tmp[24]=times[g[++m]][i];
tmp[25]=times[g[++m]][i];
tmp[26]=times[g[++m]][i];
tmp[27]=times[g[++m]][i];
tmp[28]=times[g[++m]][i];
tmp[29]=times[g[++m]][i];
tmp[30]=times[g[++m]][i];
tmp[31]=times[g[++m]][i];
tmp[32]=times[g[++m]][i];
tmp[33]=times[g[++m]][i];
tmp[34]=times[g[++m]][i];
tmp[35]=times[g[++m]][i];
tmp[36]=times[g[++m]][i];
tmp[37]=times[g[++m]][i];
tmp[38]=times[g[++m]][i];
tmp[39]=times[g[++m]][i];
tmp[40]=times[g[++m]][i];
tmp[41]=times[g[++m]][i];
tmp[42]=times[g[++m]][i];
tmp[43]=times[g[++m]][i];
tmp[44]=times[g[++m]][i];
tmp[45]=times[g[++m]][i];
tmp[46]=times[g[++m]][i];
tmp[47]=times[g[++m]][i];

spi_write(elango_dev.spi_device, addr, 48);

////////////////////this rotate is to control the length of the character

rotate();
//////////////////////////////////////////////////////////////////////////

}

s++;
gpio_direction_output(45,0);
gpio_direction_output(44,0);
gpio_direction_output(26,0);

printk(KERN_ALERT "lencheck is........... %d  \n",lencheck);

if(lencheck<length)
{
goto ela;
}

lencheck=0;

//##################### end of english printing ###################

           break;

case 73:

//######################## image printing ###########################

           printk(KERN_ALERT "inside switch.....image printing.....\n");


for(i=0;i<300;i++)
{
m=0;
tmp[0]=image[i][m];
tmp[1]=image[i][++m];
tmp[2]=image[i][++m];
tmp[3]=image[i][++m];
tmp[4]=image[i][++m];
tmp[5]=image[i][++m];
tmp[6]=image[i][++m];
tmp[7]=image[i][++m];
tmp[8]=image[i][++m];
tmp[9]=image[i][++m];
tmp[10]=image[i][++m];
tmp[11]=image[i][++m];
tmp[12]=image[i][++m];
tmp[13]=image[i][++m];
tmp[14]=image[i][++m];
tmp[15]=image[i][++m];
tmp[16]=image[i][++m];
tmp[17]=image[i][++m];
tmp[18]=image[i][++m];
tmp[19]=image[i][++m];
tmp[20]=image[i][++m];
tmp[21]=image[i][++m];
tmp[22]=image[i][++m];
tmp[23]=image[i][++m];
tmp[24]=image[i][++m];
tmp[25]=image[i][++m];
tmp[26]=image[i][++m];
tmp[27]=image[i][++m];
tmp[28]=image[i][++m];
tmp[29]=image[i][++m];
tmp[30]=image[i][++m];
tmp[31]=image[i][++m];
tmp[32]=image[i][++m];
tmp[33]=image[i][++m];
tmp[34]=image[i][++m];
tmp[35]=image[i][++m];
tmp[36]=image[i][++m];
tmp[37]=image[i][++m];
tmp[38]=0;
tmp[39]=0;
tmp[40]=0;
tmp[41]=0;
tmp[42]=0;
tmp[43]=0;
tmp[44]=0;
tmp[45]=0;
tmp[46]=0;
tmp[47]=0;

spi_write(elango_dev.spi_device, addr, 48);

rotate();

}

for(i=0;i<48;i++)
{
tmp[i]=0;
}
spi_write(elango_dev.spi_device, addr, 48);

break;

//###################### end of image printing ############################


}

}

rotate();
rotate();
rotate();
rotate();
rotate();

gpio_direction_output(45,0);
gpio_direction_output(44,0);
gpio_direction_output(26,0);

	memset(elango_ctl.rx_buff, 0, SPI_BUFF_SIZE);
	spi_message_add_tail(&elango_ctl.transfer, &elango_ctl.msg);

//-----------------------------------------------------------------------------------


}


static ssize_t elango_write(struct file* F, const char *buf[], size_t count, loff_t *f_pos)
{

//printk(KERN_ALERT "count is ...........   %d  \n",count);
//printk(KERN_ALERT "*buf is ...........   %d  \n",*buf);
//printk(KERN_ALERT "buf+1  is ...........   %d  \n",*(buf+1));
//printk(KERN_ALERT "checking ...........   %s  \n",buf);


buff=&buf;
length=count;

ssize_t status = 0;

//-----------------------------------------------------------------------------------------
	
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

