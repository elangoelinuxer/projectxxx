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


static void rotate(void)
{

int j=1;
gpio_direction_output(117,1);


while(j>0)
{
//----1
gpio_direction_output(60,1);
gpio_direction_output(48,0);
gpio_direction_output(49,0);
gpio_direction_output(115,0);
udelay(240);

gpio_direction_output(60,1);
gpio_direction_output(48,1);
gpio_direction_output(49,0);
gpio_direction_output(115,0);
udelay(120);

gpio_direction_output(60,0);
gpio_direction_output(48,0);
gpio_direction_output(49,0);
gpio_direction_output(115,0);
udelay(240);

gpio_direction_output(60,1);
gpio_direction_output(48,1);
gpio_direction_output(49,0);
gpio_direction_output(115,0);
udelay(240);

gpio_direction_output(60,0);
gpio_direction_output(48,1);
gpio_direction_output(49,0);
gpio_direction_output(115,0);
udelay(120);

gpio_direction_output(60,0);
gpio_direction_output(48,0);
gpio_direction_output(49,0);
gpio_direction_output(115,0);
udelay(240);

gpio_direction_output(60,0);
gpio_direction_output(48,1);
gpio_direction_output(49,0);
gpio_direction_output(115,0);
udelay(240);

//--------2
gpio_direction_output(60,0);
gpio_direction_output(48,1);
gpio_direction_output(49,1);
gpio_direction_output(115,0);
udelay(120);

gpio_direction_output(60,0);
gpio_direction_output(48,0);
gpio_direction_output(49,0);
gpio_direction_output(115,0);
udelay(240);

gpio_direction_output(60,0);
gpio_direction_output(48,1);
gpio_direction_output(49,1);
gpio_direction_output(115,0);
udelay(240);

gpio_direction_output(60,0);
gpio_direction_output(48,0);
gpio_direction_output(49,1);
gpio_direction_output(115,0);
udelay(120);

gpio_direction_output(60,0);
gpio_direction_output(48,0);
gpio_direction_output(49,0);
gpio_direction_output(115,0);
udelay(240);

gpio_direction_output(60,0);
gpio_direction_output(48,0);
gpio_direction_output(49,1);
gpio_direction_output(115,0);
udelay(240);


//-----------3


gpio_direction_output(60,0);
gpio_direction_output(48,0);
gpio_direction_output(49,1);
gpio_direction_output(115,1);
udelay(120);

gpio_direction_output(60,0);
gpio_direction_output(48,0);
gpio_direction_output(49,0);
gpio_direction_output(115,0);
udelay(240);

gpio_direction_output(60,0);
gpio_direction_output(48,0);
gpio_direction_output(49,1);
gpio_direction_output(115,1);
udelay(240);

gpio_direction_output(60,0);
gpio_direction_output(48,0);
gpio_direction_output(49,0);
gpio_direction_output(115,1);
udelay(120);

gpio_direction_output(60,0);
gpio_direction_output(48,0);
gpio_direction_output(49,0);
gpio_direction_output(115,0);
udelay(240);

gpio_direction_output(60,0);
gpio_direction_output(48,0);
gpio_direction_output(49,0);
gpio_direction_output(115,1);
udelay(240);

//------4

gpio_direction_output(60,1);
gpio_direction_output(48,0);
gpio_direction_output(49,0);
gpio_direction_output(115,1);
udelay(120);

gpio_direction_output(60,0);
gpio_direction_output(48,0);
gpio_direction_output(49,0);
gpio_direction_output(115,0);
udelay(240);

gpio_direction_output(60,1);
gpio_direction_output(48,0);
gpio_direction_output(49,0);
gpio_direction_output(115,1);
udelay(240);

gpio_direction_output(60,1);
gpio_direction_output(48,0);
gpio_direction_output(49,0);
gpio_direction_output(115,0);
udelay(120);

gpio_direction_output(60,0);
gpio_direction_output(48,0);
gpio_direction_output(49,0);
gpio_direction_output(115,0);
udelay(240);


j--;

}

gpio_direction_output(117,0);

}


u8 times[96][13] ={
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x02,0x02,0x02,0x04,0x04,0x04,0x00,0x08,0x00,0x00},
{0x00,0x00,0x00,0x01,0x01,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x40,0x40,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x09,0x09,0x12,0x3F,0x12,0x3F,0x24,0x24,0x00,0x00},
{0x00,0x00,0x00,0x03,0x05,0x05,0x03,0x01,0x0A,0x0A,0x07,0x04,0x00},
{0x00,0x00,0x80,0x80,0x41,0x01,0x01,0x80,0x80,0x80,0x00,0x00,0x00},
{0x00,0x00,0x00,0xE1,0x22,0x24,0xC8,0x13,0x24,0x44,0x87,0x00,0x00},
{0x00,0x00,0x00,0x03,0x04,0x05,0x0E,0xB5,0xA5,0xA2,0x1D,0x00,0x00},
{0x00,0x00,0x00,0x82,0x82,0x04,0x00,0xC0,0x00,0x00,0xC0,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x08,0x10,0x20,0x20,0x40,0x40,0x40,0x40,0x40,0x20},
{0x00,0x00,0x00,0x08,0x04,0x04,0x04,0x04,0x04,0x08,0x08,0x10,0x20},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x20,0xA8,0x70,0xA8,0x20,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x04,0x04,0x04,0x3F,0x04,0x04,0x04,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x00,0x00,0x00,0x08,0x10,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xC0,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x00,0x00},
{0x00,0x00,0x00,0x00,0x01,0x01,0x02,0x02,0x04,0x04,0x08,0x00,0x00},
{0x00,0x00,0x00,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x18,0x24,0x24,0x44,0x44,0x48,0x48,0x30,0x00,0x00},
{0x00,0x00,0x00,0x03,0x01,0x02,0x02,0x02,0x02,0x04,0x0E,0x00,0x00},
{0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x01,0x03,0x00,0x00},
{0x00,0x00,0x00,0xC0,0x20,0x20,0x40,0x40,0x80,0x40,0xC0,0x00,0x00},
{0x00,0x00,0x00,0x0E,0x12,0x04,0x18,0x04,0x04,0x04,0x38,0x00,0x00},
{0x00,0x00,0x00,0x00,0x01,0x02,0x04,0x05,0x0F,0x01,0x02,0x00,0x00},
{0x00,0x00,0x00,0xC0,0x80,0x80,0x80,0x00,0x80,0x00,0x01,0x00,0x00},
{0x00,0x00,0x00,0x38,0x40,0x60,0x10,0x10,0x10,0x20,0xC0,0x00,0x00},
{0x00,0x00,0x00,0x03,0x04,0x0E,0x11,0x11,0x11,0x12,0x0C,0x00,0x00},
{0x00,0x00,0x00,0x01,0x02,0x00,0x00,0x00,0x01,0x01,0x02,0x00,0x00},
{0x00,0x00,0x00,0xE0,0x40,0x40,0x80,0x80,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x18,0x24,0x24,0x18,0x68,0x88,0x88,0x70,0x00,0x00},
{0x00,0x00,0x00,0x03,0x04,0x08,0x08,0x09,0x07,0x02,0x1C,0x00,0x00},
{0x00,0x00,0x00,0x00,0x80,0x80,0x81,0x00,0x00,0x00,0x02,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x00,0x00,0x00,0x40,0x80,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x04,0x03,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x40,0x80,0x00,0x80,0x40,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0xF8,0x00,0xF8,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x10,0x0E,0x01,0x0E,0x10,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x01,0x01,0x00,0x00,0x00,0x00,0x01,0x00,0x00},
{0x00,0x00,0x00,0xC0,0x20,0x20,0x40,0x80,0x80,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x0F,0x10,0x27,0x49,0x51,0x52,0x52,0x5F,0x20,0x30},
{0x00,0x00,0x00,0x00,0x81,0x42,0x42,0x47,0x44,0x88,0x1D,0x40,0x80}, //A
{0x00,0x00,0x00,0x80,0x80,0x80,0x80,0x80,0x80,0x81,0xC3,0x00,0x00},
{0x00,0x00,0x00,0xF0,0x48,0x88,0xF0,0x90,0x90,0x10,0xE0,0x00,0x00},
{0x00,0x00,0x00,0x0E,0x11,0x11,0x20,0x20,0x20,0x21,0x1E,0x00,0x00},
{0x00,0x00,0x00,0x83,0x81,0x02,0x02,0x02,0x02,0x04,0x0F,0x00,0x00},
{0x00,0x00,0x00,0xE0,0x10,0x10,0x10,0x10,0x20,0x60,0x81,0x00,0x00},
{0x00,0x00,0x00,0x7C,0x24,0x48,0x78,0x50,0x40,0x88,0xF0,0x00,0x00},
{0x00,0x00,0x00,0x0F,0x04,0x09,0x0F,0x0A,0x08,0x10,0x38,0x00,0x00},
{0x00,0x00,0x00,0xC0,0x41,0x03,0x02,0x02,0x02,0x02,0x01,0x00,0x00},
{0x00,0x00,0x00,0xE8,0x18,0x10,0x00,0x38,0x10,0x10,0xE0,0x00,0x00},
{0x00,0x00,0x00,0x3B,0x11,0x22,0x3E,0x22,0x22,0x44,0xEE,0x00,0x00},
{0x00,0x00,0x00,0x87,0x02,0x04,0x04,0x04,0x04,0x08,0x1C,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x03,0x00,0x00},
{0x00,0x00,0x00,0x70,0x20,0x40,0x40,0x40,0x80,0x80,0x00,0x00,0x00},
{0x00,0x00,0x00,0x1D,0x0B,0x14,0x18,0x18,0x14,0x24,0x77,0x00,0x00},
{0x00,0x00,0x00,0x83,0x01,0x02,0x02,0x02,0x02,0x04,0x0F,0x00,0x00},
{0x00,0x00,0x00,0x80,0x00,0x00,0x00,0x00,0x00,0x81,0x83,0x00,0x00},
{0x00,0x00,0x00,0xC1,0x42,0xA6,0xAA,0xAA,0xB2,0x24,0xAE,0x00,0x00},
{0x00,0x00,0x00,0x98,0x08,0x14,0x14,0x12,0x12,0x21,0x71,0x00,0x00},
{0x00,0x00,0x00,0xE0,0x40,0x41,0x82,0x82,0x82,0x02,0x01,0x00,0x00},
{0x00,0x00,0x00,0x70,0x88,0x08,0x08,0x08,0x10,0x30,0xC0,0x00,0x00},
{0x00,0x00,0x00,0x3C,0x12,0x22,0x22,0x3C,0x20,0x40,0xE0,0x00,0x00},
{0x00,0x00,0x00,0x01,0x02,0x04,0x08,0x08,0x08,0x08,0x0F,0x04,0x0F},  //W
{0x00,0x00,0x00,0xC0,0x20,0x20,0x20,0x20,0x40,0x81,0x03,0x40,0x80},  
{0x00,0x00,0x00,0xF0,0x48,0x88,0xF0,0xA0,0xA0,0x10,0x98,0x00,0x00},
{0x00,0x00,0x00,0x0D,0x12,0x10,0x08,0x04,0x24,0x24,0x58,0x00,0x00},
{0x00,0x00,0x00,0x03,0x02,0x01,0x01,0x01,0x01,0x02,0x07,0x00,0x00},   //Z
{0x00,0x00,0x00,0xE0,0xA0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0xE7,0x42,0x84,0x84,0x84,0x84,0x88,0x70,0x00,0x00},
{0x00,0x00,0x00,0x1C,0x08,0x09,0x0A,0x14,0x14,0x18,0x10,0x00,0x00},
{0x00,0x00,0x00,0xC3,0x81,0x01,0x02,0x02,0x03,0x03,0x02,0x00,0x00},
{0x00,0x00,0x00,0x76,0x24,0x68,0x48,0xD0,0x50,0x60,0x40,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x37,0x12,0x14,0x18,0x18,0x28,0x48,0xDC,0x00},
{0x00,0x00,0x00,0x00,0x8E,0x04,0x04,0x05,0x02,0x04,0x04,0x0E,0x00},
{0x00,0x00,0x00,0x00,0xC0,0x81,0x80,0x00,0x00,0x00,0x01,0x03,0x00},
{0x00,0x00,0x00,0x00,0xF8,0x10,0x20,0x40,0x40,0x80,0x10,0xF0,0x00},
{0x00,0x00,0x00,0x00,0x1C,0x10,0x10,0x10,0x20,0x20,0x20,0x20,0x40},
{0x00,0x00,0x00,0x00,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x70,0x10,0x20,0x20,0x20,0x40,0x40,0x40,0x80},
{0x00,0x00,0x00,0x00,0x00,0x08,0x14,0x22,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x20,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x09,0x11,0x12,0x1F,0x00},
{0x00,0x00,0x00,0x00,0x01,0x00,0x01,0x01,0x01,0x02,0x02,0x01,0x00},
{0x00,0x00,0x00,0x00,0x80,0x80,0x00,0xE0,0x20,0x20,0x40,0x80,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x18,0x28,0x40,0x48,0x70,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x04,0x09,0x09,0x0F,0x00},
{0x00,0x00,0x00,0x00,0xC0,0x40,0x80,0x80,0x80,0x01,0x01,0x81,0x00}
};

static void elango_prepare_spi_message(u32 *buff)
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

u8 tmp[48];
u32 *addr=&tmp;


tmp[0]=tmp[1]=tmp[2]=tmp[3]=tmp[4]=tmp[5]=tmp[6]=tmp[7]=tmp[8]=tmp[9]=tmp[10]=tmp[11]=tmp[12]=tmp[13]=tmp[14]=tmp[15]=tmp[16]=tmp[17]=tmp[18]=tmp[19]=tmp[20]=tmp[21]=tmp[22]=tmp[23]=tmp[24]=tmp[25]=tmp[26]=tmp[27]=tmp[28]=tmp[29]=tmp[30]=tmp[31]=tmp[32]=tmp[33]=tmp[34]=tmp[35]=tmp[36]=tmp[37]=tmp[38]=tmp[39]=tmp[40]=tmp[41]=tmp[42]=tmp[43]=tmp[44]=tmp[45]=tmp[46]=tmp[47]=0;


int i,j;

for(j=0;j<3;j++)
{

for(i=0;i<13;i++)
{
int k=45;

tmp[0]=times[k++][i];
tmp[1]=times[k++][i];
tmp[2]=times[k++][i];
tmp[3]=times[k++][i];
tmp[4]=times[k++][i];
tmp[5]=times[k++][i];
tmp[6]=times[k++][i];
tmp[7]=times[k++][i];
tmp[8]=times[k++][i];
tmp[9]=times[k++][i];
tmp[10]=times[k++][i];
tmp[11]=times[k++][i];
tmp[12]=times[k++][i];
tmp[13]=times[k++][i];
tmp[14]=times[k++][i];
tmp[15]=times[k++][i];
tmp[16]=times[k++][i];
tmp[17]=times[k++][i];
tmp[18]=times[k++][i];
tmp[19]=times[k++][i];
tmp[20]=times[k++][i];
tmp[21]=times[k++][i];
tmp[22]=times[k++][i];
tmp[23]=times[k++][i];
tmp[24]=times[k++][i];
tmp[25]=times[k++][i];
tmp[26]=times[k++][i];
tmp[27]=times[k++][i];
tmp[28]=times[k++][i];
tmp[29]=times[k++][i];
tmp[30]=times[k++][i];
tmp[31]=times[k++][i];
tmp[32]=times[k++][i];
tmp[33]=times[k++][i];
tmp[34]=times[k++][i];
tmp[35]=times[k++][i];
tmp[36]=times[k++][i];
tmp[37]=times[k++][i];
tmp[38]=times[k++][i];
tmp[39]=times[k++][i];
tmp[40]=times[k++][i];
tmp[41]=times[k++][i];
tmp[42]=times[k++][i];
tmp[43]=times[k++][i];
tmp[44]=times[k++][i];
tmp[45]=times[k++][i];
tmp[46]=times[k++][i];
tmp[47]=times[k++][i];

//spi_write(elango_dev.spi_device, addr, 48);


if(buff==101)
{

addr=&tmp[5];

spi_write(elango_dev.spi_device, addr, 48);


}
printk(KERN_ALERT "data is ...........%d \n",buff);


rotate();

tmp[0]=tmp[1]=tmp[2]=tmp[3]=tmp[4]=tmp[5]=tmp[6]=tmp[7]=tmp[8]=tmp[9]=tmp[10]=tmp[11]=tmp[12]=tmp[13]=tmp[14]=tmp[15]=tmp[16]=tmp[17]=tmp[18]=tmp[19]=tmp[20]=tmp[21]=tmp[22]=tmp[23]=tmp[24]=tmp[25]=tmp[26]=tmp[27]=tmp[28]=tmp[29]=tmp[30]=tmp[31]=tmp[32]=tmp[33]=tmp[34]=tmp[35]=tmp[36]=tmp[37]=tmp[38]=tmp[39]=tmp[40]=tmp[41]=tmp[42]=tmp[43]=tmp[44]=tmp[45]=tmp[46]=tmp[47]=0;


}

spi_write(elango_dev.spi_device, addr, 48);



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
	//elango_ctl.transfer.tx_buf = elango_ctl.tx_buff;
	//elango_ctl.transfer.rx_buf = elango_ctl.rx_buff;
	//elango_ctl.transfer.len = 48;
	spi_message_add_tail(&elango_ctl.transfer, &elango_ctl.msg);

//-----------------------------------------------------------------------------------

}

/*
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
*/

static ssize_t elango_write(struct file* F, const char *buf, size_t count, loff_t *f_pos)
{

//printk(KERN_ALERT "data is ...........   %d  \n",buf[0]);


	ssize_t status = 0;


//status = elango_do_one_message();


//-----------------------------------------------------------------------------------------
	if (down_interruptible(&elango_dev.spi_sem))
		return -ERESTARTSYS;

	if (!elango_dev.spi_device) 
        {
		up(&elango_dev.spi_sem);
		return -ENODEV;
	}


	elango_prepare_spi_message(buf[0]);
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

