
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


void null(void)
{

u32 word=0;
int i;

for(i=0;i<12;i++);
{
spi_write(elango_dev.spi_device, &word, sizeof(word));
}


}

u32 times[96][19] ={
{0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000},
{0x00000000,0x00000000,0x00000000,0x00000000,0x20000000,0x20000000,0x20000000,0x20000000,0x20000000,0x20000000,0x20000000,0x20000000,0x20000000,0x00000000,0x20000000,0x00000000,0x00000000,0x00000000,0x00000000},
{0x00000000,0x00000000,0x00000000,0x00000000,0x50000000,0x50000000,0x50000000,0x50000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000},
{0x00000000,0x00000000,0x00000000,0x00000000,0x12000000,0x12000000,0x12000000,0x24000000,0xFF000000,0x24000000,0x24000000,0xFF000000,0x48000000,0x48000000,0x48000000,0x00000000,0x00000000,0x00000000,0x00000000},
{0x00000000,0x00000000,0x00000000,0x10000000,0x3C000000,0x52000000,0x52000000,0x50000000,0x30000000,0x18000000,0x14000000,0x12000000,0x52000000,0x52000000,0x3C000000,0x10000000,0x00000000,0x00000000,0x00000000},
{0x00000000,0x00000000,0x00000000,0x00000000,0x60400000,0x90800000,0x90800000,0x91000000,0x92000000,0x64600000,0x04900000,0x08900000,0x10900000,0x20900000,0x20600000,0x00000000,0x00000000,0x00000000,0x00000000},
{0x00000000,0x00000000,0x00000000,0x00000000,0x0E000000,0x11000000,0x11000000,0x13000000,0x0CE00000,0x1C400000,0x24800000,0x42800000,0x43000000,0x63100000,0x3CE00000,0x00000000,0x00000000,0x00000000,0x00000000},
{0x00000000,0x00000000,0x00000000,0x00000000,0x40000000,0x40000000,0x40000000,0x40000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000},
{0x00000000,0x00000000,0x00000000,0x00000000,0x08000000,0x10000000,0x20000000,0x20000000,0x40000000,0x40000000,0x40000000,0x40000000,0x40000000,0x40000000,0x20000000,0x20000000,0x10000000,0x08000000,0x00000000},
{0x00000000,0x00000000,0x00000000,0x00000000,0x80000000,0x40000000,0x20000000,0x20000000,0x10000000,0x10000000,0x10000000,0x10000000,0x10000000,0x10000000,0x20000000,0x20000000,0x40000000,0x80000000,0x00000000},
{0x00000000,0x00000000,0x00000000,0x00000000,0x08000000,0x6B000000,0x1C000000,0x1C000000,0x6B000000,0x08000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000},
{0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x08000000,0x08000000,0x08000000,0x08000000,0xFF800000,0x08000000,0x08000000,0x08000000,0x08000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000},
{0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x60000000,0x20000000,0x40000000,0x00000000,0x00000000},
{0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x78000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000},
{0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x40000000,0x00000000,0x00000000,0x00000000,0x00000000},
{0x00000000,0x00000000,0x00000000,0x00000000,0x10000000,0x10000000,0x20000000,0x20000000,0x20000000,0x40000000,0x40000000,0x40000000,0x40000000,0x80000000,0x80000000,0x00000000,0x00000000,0x00000000,0x00000000},
{0x00000000,0x00000000,0x00000000,0x00000000,0x18000000,0x24000000,0x42000000,0x42000000,0x42000000,0x42000000,0x42000000,0x42000000,0x42000000,0x24000000,0x18000000,0x00000000,0x00000000,0x00000000,0x00000000},
{0x00000000,0x00000000,0x00000000,0x00000000,0x08000000,0x38000000,0x08000000,0x08000000,0x08000000,0x08000000,0x08000000,0x08000000,0x08000000,0x08000000,0x1C000000,0x00000000,0x00000000,0x00000000,0x00000000},
{0x00000000,0x00000000,0x00000000,0x00000000,0x38000000,0x44000000,0x42000000,0x02000000,0x02000000,0x04000000,0x08000000,0x10000000,0x20000000,0x42000000,0x7E000000,0x00000000,0x00000000,0x00000000,0x00000000},
{0x00000000,0x00000000,0x00000000,0x00000000,0x3C000000,0x42000000,0x02000000,0x04000000,0x08000000,0x1C000000,0x02000000,0x02000000,0x02000000,0x04000000,0x78000000,0x00000000,0x00000000,0x00000000,0x00000000},
{0x00000000,0x00000000,0x00000000,0x00000000,0x04000000,0x0C000000,0x14000000,0x14000000,0x24000000,0x44000000,0x84000000,0xFE000000,0x04000000,0x04000000,0x04000000,0x00000000,0x00000000,0x00000000,0x00000000},
{0x00000000,0x00000000,0x00000000,0x00000000,0x1E000000,0x20000000,0x20000000,0x78000000,0x04000000,0x02000000,0x02000000,0x02000000,0x02000000,0x04000000,0x78000000,0x00000000,0x00000000,0x00000000,0x00000000},
{0x00000000,0x00000000,0x00000000,0x00000000,0x0E000000,0x10000000,0x20000000,0x20000000,0x58000000,0x64000000,0x42000000,0x42000000,0x42000000,0x24000000,0x18000000,0x00000000,0x00000000,0x00000000,0x00000000},
{0x00000000,0x00000000,0x00000000,0x00000000,0x7E000000,0x82000000,0x02000000,0x04000000,0x04000000,0x04000000,0x08000000,0x08000000,0x08000000,0x10000000,0x10000000,0x00000000,0x00000000,0x00000000,0x00000000},
{0x00000000,0x00000000,0x00000000,0x00000000,0x3C000000,0x42000000,0x42000000,0x42000000,0x24000000,0x18000000,0x24000000,0x42000000,0x42000000,0x42000000,0x3C000000,0x00000000,0x00000000,0x00000000,0x00000000},
{0x00000000,0x00000000,0x00000000,0x00000000,0x38000000,0x24000000,0x42000000,0x42000000,0x42000000,0x26000000,0x1A000000,0x04000000,0x04000000,0x18000000,0x60000000,0x00000000,0x00000000,0x00000000,0x00000000},
{0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x40000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x40000000,0x00000000,0x00000000,0x00000000,0x00000000},
{0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x40000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x60000000,0x20000000,0x40000000,0x00000000,0x00000000},
{0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x01000000,0x0E000000,0x30000000,0x40000000,0x30000000,0x0E000000,0x01000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000},
{0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0xFF800000,0x00000000,0x00000000,0xFF800000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000},
{0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x40000000,0x38000000,0x06000000,0x01000000,0x06000000,0x38000000,0x40000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000},
{0x00000000,0x00000000,0x00000000,0x00000000,0x38000000,0x44000000,0x44000000,0x04000000,0x08000000,0x08000000,0x10000000,0x10000000,0x10000000,0x00000000,0x10000000,0x00000000,0x00000000,0x00000000,0x00000000},
{0x00000000,0x00000000,0x00000000,0x00000000,0x03E00000,0x0C100000,0x10080000,0x21A40000,0x22640000,0x44440000,0x44440000,0x48C40000,0x48880000,0x49980000,0x4EE20000,0x20040000,0x10080000,0x08100000,0x07E00000},
{0x00000000,0x00000000,0x00000000,0x00000000,0x04000000,0x04000000,0x0A000000,0x0A000000,0x0A000000,0x11000000,0x11000000,0x1F000000,0x20800000,0x20800000,0xF1E00000,0x00000000,0x00000000,0x00000000,0x00000000},
{0x00000000,0x00000000,0x00000000,0x00000000,0xFC000000,0x22000000,0x21000000,0x21000000,0x22000000,0x3E000000,0x21000000,0x20800000,0x20800000,0x21000000,0xFE000000,0x00000000,0x00000000,0x00000000,0x00000000},
{0x00000000,0x00000000,0x00000000,0x00000000,0x0F400000,0x10C00000,0x20400000,0x40400000,0x40000000,0x40000000,0x40000000,0x40000000,0x20400000,0x10800000,0x0F000000,0x00000000,0x00000000,0x00000000,0x00000000},
{0x00000000,0x00000000,0x00000000,0x00000000,0xFE000000,0x21000000,0x20800000,0x20400000,0x20400000,0x20400000,0x20400000,0x20400000,0x20800000,0x21000000,0xFE000000,0x00000000,0x00000000,0x00000000,0x00000000},
{0x00000000,0x00000000,0x00000000,0x00000000,0xFF000000,0x21000000,0x20000000,0x20000000,0x22000000,0x3E000000,0x22000000,0x20000000,0x20800000,0x21000000,0xFF000000,0x00000000,0x00000000,0x00000000,0x00000000},
{0x00000000,0x00000000,0x00000000,0x00000000,0xFF000000,0x21000000,0x20000000,0x20000000,0x22000000,0x3E000000,0x22000000,0x20000000,0x20000000,0x20000000,0xF8000000,0x00000000,0x00000000,0x00000000,0x00000000},
{0x00000000,0x00000000,0x00000000,0x00000000,0x0F400000,0x10C00000,0x20400000,0x40000000,0x40000000,0x41E00000,0x40400000,0x40400000,0x20400000,0x10400000,0x0F800000,0x00000000,0x00000000,0x00000000,0x00000000},
{0x00000000,0x00000000,0x00000000,0x00000000,0xFBE00000,0x20800000,0x20800000,0x20800000,0x20800000,0x3F800000,0x20800000,0x20800000,0x20800000,0x20800000,0xFBE00000,0x00000000,0x00000000,0x00000000,0x00000000},
{0x00000000,0x00000000,0x00000000,0x00000000,0xF8000000,0x20000000,0x20000000,0x20000000,0x20000000,0x20000000,0x20000000,0x20000000,0x20000000,0x20000000,0xF8000000,0x00000000,0x00000000,0x00000000,0x00000000},
{0x00000000,0x00000000,0x00000000,0x00000000,0x7C000000,0x10000000,0x10000000,0x10000000,0x10000000,0x10000000,0x10000000,0x10000000,0x10000000,0x90000000,0xE0000000,0x00000000,0x00000000,0x00000000,0x00000000},
{0x00000000,0x00000000,0x00000000,0x00000000,0xFBC00000,0x20800000,0x21000000,0x22000000,0x24000000,0x38000000,0x24000000,0x22000000,0x21000000,0x20800000,0xF9E00000,0x00000000,0x00000000,0x00000000,0x00000000},
{0x00000000,0x00000000,0x00000000,0x00000000,0xF8000000,0x20000000,0x20000000,0x20000000,0x20000000,0x20000000,0x20000000,0x20000000,0x20800000,0x21000000,0xFF000000,0x00000000,0x00000000,0x00000000,0x00000000},
{0x00000000,0x00000000,0x00000000,0x00000000,0xE01C0000,0x30300000,0x30300000,0x28500000,0x28500000,0x24500000,0x24900000,0x24900000,0x23100000,0x21100000,0xF97C0000,0x00000000,0x00000000,0x00000000,0x00000000},
{0x00000000,0x00000000,0x00000000,0x00000000,0xE1F00000,0x20400000,0x30400000,0x28400000,0x24400000,0x22400000,0x22400000,0x21400000,0x20C00000,0x20400000,0xF8400000,0x00000000,0x00000000,0x00000000,0x00000000},
{0x00000000,0x00000000,0x00000000,0x00000000,0x0F000000,0x10800000,0x20400000,0x40200000,0x40200000,0x40200000,0x40200000,0x40200000,0x20400000,0x10800000,0x0F000000,0x00000000,0x00000000,0x00000000,0x00000000},
{0x00000000,0x00000000,0x00000000,0x00000000,0xFC000000,0x22000000,0x21000000,0x21000000,0x21000000,0x22000000,0x3C000000,0x20000000,0x20000000,0x20000000,0xF8000000,0x00000000,0x00000000,0x00000000,0x00000000},
{0x00000000,0x00000000,0x00000000,0x00000000,0x0F000000,0x10800000,0x20400000,0x40200000,0x40200000,0x40200000,0x40200000,0x40200000,0x20400000,0x10800000,0x0F000000,0x02000000,0x01800000,0x00600000,0x00000000},
{0x00000000,0x00000000,0x00000000,0x00000000,0xFC000000,0x22000000,0x21000000,0x21000000,0x22000000,0x3C000000,0x24000000,0x22000000,0x22000000,0x21000000,0xF8C00000,0x00000000,0x00000000,0x00000000,0x00000000},
{0x00000000,0x00000000,0x00000000,0x00000000,0x1D000000,0x23000000,0x41000000,0x40000000,0x30000000,0x0C000000,0x02000000,0x01000000,0x41000000,0x62000000,0x5C000000,0x00000000,0x00000000,0x00000000,0x00000000},
{0x00000000,0x00000000,0x00000000,0x00000000,0xFF800000,0x88800000,0x88800000,0x08000000,0x08000000,0x08000000,0x08000000,0x08000000,0x08000000,0x08000000,0x3E000000,0x00000000,0x00000000,0x00000000,0x00000000},
{0x00000000,0x00000000,0x00000000,0x00000000,0xFBE00000,0x20800000,0x20800000,0x20800000,0x20800000,0x20800000,0x20800000,0x20800000,0x20800000,0x11000000,0x0E000000,0x00000000,0x00000000,0x00000000,0x00000000},
{0x00000000,0x00000000,0x00000000,0x00000000,0xF1E00000,0x20800000,0x20800000,0x20800000,0x11000000,0x11000000,0x11000000,0x0A000000,0x0A000000,0x0A000000,0x04000000,0x00000000,0x00000000,0x00000000,0x00000000},
{0x00000000,0x00000000,0x00000000,0x00000000,0xF79E0000,0x21080000,0x21080000,0x11080000,0x10900000,0x11900000,0x0A900000,0x0A500000,0x0A500000,0x04200000,0x04200000,0x00000000,0x00000000,0x00000000,0x00000000},
{0x00000000,0x00000000,0x00000000,0x00000000,0xF9E00000,0x20800000,0x11000000,0x0A000000,0x0A000000,0x04000000,0x0A000000,0x0A000000,0x11000000,0x20800000,0xF1E00000,0x00000000,0x00000000,0x00000000,0x00000000},
{0x00000000,0x00000000,0x00000000,0x00000000,0x79E00000,0x10800000,0x11000000,0x09000000,0x0A000000,0x04000000,0x04000000,0x04000000,0x04000000,0x04000000,0x1F000000,0x00000000,0x00000000,0x00000000,0x00000000},
{0x00000000,0x00000000,0x00000000,0x00000000,0x7F000000,0x42000000,0x42000000,0x04000000,0x08000000,0x08000000,0x10000000,0x20000000,0x40800000,0x41000000,0xFF000000,0x00000000,0x00000000,0x00000000,0x00000000},
{0x00000000,0x00000000,0x00000000,0x00000000,0x70000000,0x40000000,0x40000000,0x40000000,0x40000000,0x40000000,0x40000000,0x40000000,0x40000000,0x40000000,0x40000000,0x40000000,0x40000000,0x70000000,0x00000000},
{0x00000000,0x00000000,0x00000000,0x00000000,0x80000000,0x80000000,0x40000000,0x40000000,0x40000000,0x40000000,0x20000000,0x20000000,0x20000000,0x10000000,0x10000000,0x00000000,0x00000000,0x00000000,0x00000000},
{0x00000000,0x00000000,0x00000000,0x00000000,0x70000000,0x10000000,0x10000000,0x10000000,0x10000000,0x10000000,0x10000000,0x10000000,0x10000000,0x10000000,0x10000000,0x10000000,0x10000000,0x70000000,0x00000000},
{0x00000000,0x00000000,0x00000000,0x00000000,0x18000000,0x24000000,0x24000000,0x42000000,0x42000000,0x81000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000},
{0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0xFF000000,0x00000000},
{0x00000000,0x00000000,0x00000000,0x00000000,0x40000000,0x20000000,0x20000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000},
{0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x38000000,0x44000000,0x0C000000,0x34000000,0x44000000,0x4C000000,0x76000000,0x00000000,0x00000000,0x00000000,0x00000000},
{0x00000000,0x00000000,0x00000000,0x00000000,0x40000000,0xC0000000,0x40000000,0x40000000,0x58000000,0x64000000,0x42000000,0x42000000,0x42000000,0x44000000,0x38000000,0x00000000,0x00000000,0x00000000,0x00000000},
{0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x38000000,0x44000000,0x40000000,0x40000000,0x40000000,0x44000000,0x38000000,0x00000000,0x00000000,0x00000000,0x00000000},
{0x00000000,0x00000000,0x00000000,0x00000000,0x02000000,0x06000000,0x02000000,0x02000000,0x1A000000,0x26000000,0x42000000,0x42000000,0x42000000,0x27000000,0x1A000000,0x00000000,0x00000000,0x00000000,0x00000000},
{0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x38000000,0x44000000,0x7C000000,0x40000000,0x40000000,0x44000000,0x38000000,0x00000000,0x00000000,0x00000000,0x00000000},
{0x00000000,0x00000000,0x00000000,0x00000000,0x38000000,0x44000000,0x40000000,0x40000000,0xF0000000,0x40000000,0x40000000,0x40000000,0x40000000,0x40000000,0xF0000000,0x00000000,0x00000000,0x00000000,0x00000000},
{0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x3E000000,0x44000000,0x44000000,0x44000000,0x38000000,0x40000000,0x7C000000,0x82000000,0x82000000,0x7C000000,0x00000000},
{0x00000000,0x00000000,0x00000000,0x00000000,0x40000000,0xC0000000,0x40000000,0x40000000,0x58000000,0x64000000,0x44000000,0x44000000,0x44000000,0x44000000,0xEE000000,0x00000000,0x00000000,0x00000000,0x00000000},
{0x00000000,0x00000000,0x00000000,0x00000000,0x40000000,0x00000000,0x00000000,0x00000000,0x40000000,0xC0000000,0x40000000,0x40000000,0x40000000,0x40000000,0xE0000000,0x00000000,0x00000000,0x00000000,0x00000000},
{0x00000000,0x00000000,0x00000000,0x00000000,0x20000000,0x00000000,0x00000000,0x00000000,0x20000000,0x60000000,0x20000000,0x20000000,0x20000000,0x20000000,0x20000000,0x20000000,0x20000000,0xC0000000,0x00000000},
{0x00000000,0x00000000,0x00000000,0x00000000,0x40000000,0xC0000000,0x40000000,0x40000000,0x4E000000,0x48000000,0x50000000,0x70000000,0x48000000,0x48000000,0xE7000000,0x00000000,0x00000000,0x00000000,0x00000000},
{0x00000000,0x00000000,0x00000000,0x00000000,0x40000000,0xC0000000,0x40000000,0x40000000,0x40000000,0x40000000,0x40000000,0x40000000,0x40000000,0x40000000,0xE0000000,0x00000000,0x00000000,0x00000000,0x00000000},
{0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x59800000,0xE6400000,0x44400000,0x44400000,0x44400000,0x44400000,0xEEE00000,0x00000000,0x00000000,0x00000000,0x00000000},
{0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x58000000,0xE4000000,0x44000000,0x44000000,0x44000000,0x44000000,0xEE000000,0x00000000,0x00000000,0x00000000,0x00000000},
{0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x18000000,0x24000000,0x42000000,0x42000000,0x42000000,0x24000000,0x18000000,0x00000000,0x00000000,0x00000000,0x00000000},
{0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x58000000,0xE4000000,0x42000000,0x42000000,0x42000000,0x64000000,0x58000000,0x40000000,0x40000000,0xE0000000,0x00000000},
{0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x1A000000,0x26000000,0x42000000,0x42000000,0x42000000,0x46000000,0x3A000000,0x02000000,0x02000000,0x07000000,0x00000000},
{0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x58000000,0xE0000000,0x40000000,0x40000000,0x40000000,0x40000000,0xE0000000,0x00000000,0x00000000,0x00000000,0x00000000},
{0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x38000000,0x48000000,0x40000000,0x30000000,0x08000000,0x48000000,0x70000000,0x00000000,0x00000000,0x00000000,0x00000000},
{0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x40000000,0x40000000,0xF0000000,0x40000000,0x40000000,0x40000000,0x40000000,0x50000000,0x60000000,0x00000000,0x00000000,0x00000000,0x00000000},
{0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0xCC000000,0x44000000,0x44000000,0x44000000,0x44000000,0x4E000000,0x34000000,0x00000000,0x00000000,0x00000000,0x00000000},
{0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0xEE000000,0x44000000,0x44000000,0x28000000,0x28000000,0x28000000,0x10000000,0x00000000,0x00000000,0x00000000,0x00000000},
{0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0xEEE00000,0x44400000,0x44400000,0x2A800000,0x2A800000,0x33000000,0x11000000,0x00000000,0x00000000,0x00000000,0x00000000},
{0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0xEE000000,0x44000000,0x28000000,0x10000000,0x28000000,0x44000000,0xEE000000,0x00000000,0x00000000,0x00000000,0x00000000},
{0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0xEE000000,0x44000000,0x44000000,0x28000000,0x28000000,0x18000000,0x10000000,0x10000000,0x20000000,0xC0000000,0x00000000},
{0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x7C000000,0x48000000,0x10000000,0x20000000,0x20000000,0x44000000,0xFC000000,0x00000000,0x00000000,0x00000000,0x00000000},
{0x00000000,0x00000000,0x00000000,0x00000000,0x04000000,0x08000000,0x10000000,0x10000000,0x10000000,0x10000000,0x20000000,0x10000000,0x10000000,0x10000000,0x10000000,0x10000000,0x08000000,0x04000000,0x00000000},
{0x00000000,0x00000000,0x00000000,0x00000000,0x40000000,0x40000000,0x40000000,0x40000000,0x40000000,0x40000000,0x40000000,0x40000000,0x40000000,0x40000000,0x40000000,0x40000000,0x40000000,0x40000000,0x40000000},
{0x00000000,0x00000000,0x00000000,0x00000000,0x40000000,0x20000000,0x10000000,0x10000000,0x10000000,0x10000000,0x08000000,0x10000000,0x10000000,0x10000000,0x10000000,0x10000000,0x20000000,0x40000000,0x00000000},
{0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x70800000,0x8F000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000},
{0x00000000,0x00000000,0x00000000,0x00000000,0x3FC00000,0x20400000,0x20400000,0x20400000,0x20400000,0x20400000,0x20400000,0x20400000,0x20400000,0x20400000,0x3FC00000,0x00000000,0x00000000,0x00000000,0x00000000}
};



void data(u32 *tmp)
{

u32 word[12];

// no of columns........

//....1.....

spi_write(elango_dev.spi_device, (tmp), sizeof(word[0]));

//....2.....

spi_write(elango_dev.spi_device, (++tmp), sizeof(word[1]));	

//...3......

spi_write(elango_dev.spi_device, (++tmp), sizeof(word[2]));	

//....4.....

spi_write(elango_dev.spi_device, (++tmp), sizeof(word[3]));	


//.....5........


spi_write(elango_dev.spi_device, (++tmp), sizeof(word[4]));	

//......6.......


spi_write(elango_dev.spi_device, (++tmp), sizeof(word[5]));

//.......7........

spi_write(elango_dev.spi_device, (++tmp), sizeof(word[6]));


//......8...........


spi_write(elango_dev.spi_device, (++tmp), sizeof(word[7]));


//........9...........


spi_write(elango_dev.spi_device, (++tmp), sizeof(word[8]));

//........10..........


spi_write(elango_dev.spi_device, (++tmp), sizeof(word[9]));

//.........11.........
	

spi_write(elango_dev.spi_device, (++tmp), sizeof(word[10]));

//..........12.......

spi_write(elango_dev.spi_device, (++tmp), sizeof(word[11]));


/*

//....13.....

spi_write(elango_dev.spi_device, (tmp), sizeof(word[0]));

//....14.....

spi_write(elango_dev.spi_device, (++tmp), sizeof(word[1]));	

//...15......

spi_write(elango_dev.spi_device, (++tmp), sizeof(word[2]));	

//....16.....

spi_write(elango_dev.spi_device, (++tmp), sizeof(word[3]));	


//.....17........


spi_write(elango_dev.spi_device, (++tmp), sizeof(word[4]));	

//......18.......


spi_write(elango_dev.spi_device, (++tmp), sizeof(word[5]));

//.......19........

spi_write(elango_dev.spi_device, (++tmp), sizeof(word[6]));


//......20...........


spi_write(elango_dev.spi_device, (++tmp), sizeof(word[7]));


//........21...........


spi_write(elango_dev.spi_device, (++tmp), sizeof(word[8]));

//........22..........


spi_write(elango_dev.spi_device, (++tmp), sizeof(word[9]));

//.........23.........
	

spi_write(elango_dev.spi_device, (++tmp), sizeof(word[10]));

//..........24.......

spi_write(elango_dev.spi_device, (++tmp), sizeof(word[11]));


//....25.....

spi_write(elango_dev.spi_device, (tmp), sizeof(word[0]));

//....26.....

spi_write(elango_dev.spi_device, (++tmp), sizeof(word[1]));	

//...27......

spi_write(elango_dev.spi_device, (++tmp), sizeof(word[2]));	

//....28.....

spi_write(elango_dev.spi_device, (++tmp), sizeof(word[3]));	


//.....29........


spi_write(elango_dev.spi_device, (++tmp), sizeof(word[4]));	

//......30.......


spi_write(elango_dev.spi_device, (++tmp), sizeof(word[5]));

//.......31........

spi_write(elango_dev.spi_device, (++tmp), sizeof(word[6]));


//......32...........


spi_write(elango_dev.spi_device, (++tmp), sizeof(word[7]));


//........33...........


spi_write(elango_dev.spi_device, (++tmp), sizeof(word[8]));

//........34..........


spi_write(elango_dev.spi_device, (++tmp), sizeof(word[9]));

//.........35.........
	

spi_write(elango_dev.spi_device, (++tmp), sizeof(word[10]));

//..........36.......

spi_write(elango_dev.spi_device, (++tmp), sizeof(word[11]));

//....37.....

spi_write(elango_dev.spi_device, (tmp), sizeof(word[0]));

//....38.....

spi_write(elango_dev.spi_device, (++tmp), sizeof(word[1]));	

//...39......

spi_write(elango_dev.spi_device, (++tmp), sizeof(word[2]));	

//....40.....

spi_write(elango_dev.spi_device, (++tmp), sizeof(word[3]));	


//.....41........


spi_write(elango_dev.spi_device, (++tmp), sizeof(word[4]));	

//......42.......


spi_write(elango_dev.spi_device, (++tmp), sizeof(word[5]));

//.......43........

spi_write(elango_dev.spi_device, (++tmp), sizeof(word[6]));


//......44...........


spi_write(elango_dev.spi_device, (++tmp), sizeof(word[7]));


//........45...........


spi_write(elango_dev.spi_device, (++tmp), sizeof(word[8]));

//........46..........


spi_write(elango_dev.spi_device, (++tmp), sizeof(word[9]));

//.........47.........
	

spi_write(elango_dev.spi_device, (++tmp), sizeof(word[10]));

//..........48.......

spi_write(elango_dev.spi_device, (++tmp), sizeof(word[11]));


*/
//----------------------------------------------------------------------



}


static void rotate(void)
{

int j=2;
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

//elango_dev.spi_device->mode=1;
elango_dev.spi_device->bits_per_word=8;

u8 tmp[48];

tmp[0]=tmp[1]=tmp[2]=tmp[3]=tmp[4]=tmp[5]=tmp[6]=tmp[7]=tmp[8]=tmp[9]=tmp[10]=tmp[11]=tmp[12]=tmp[13]=tmp[14]=tmp[15]=tmp[16]=tmp[17]=tmp[18]=tmp[19]=tmp[20]=tmp[21]=tmp[22]=tmp[23]=tmp[24]=tmp[25]=tmp[26]=tmp[27]=tmp[28]=tmp[29]=tmp[30]=tmp[31]=tmp[32]=tmp[33]=tmp[34]=tmp[35]=tmp[36]=tmp[37]=tmp[38]=tmp[39]=tmp[40]=tmp[41]=tmp[42]=tmp[43]=tmp[44]=tmp[45]=tmp[46]=tmp[47]=0;

int i,j;

for(j=0;j<6;j++)
{
//for(i=0;i<=19;i++)
{


tmp[0]=0xf0;
tmp[1]=0xff;
tmp[2]=0xff;
tmp[3]=0xff;
tmp[4]=0x01;
tmp[5]=0x01;
tmp[6]=0x01;
tmp[7]=0x01;
tmp[8]=0x66;
tmp[9]=0x66;
tmp[10]=0x66;
tmp[11]=0x66;

tmp[12]=0xf0;
tmp[13]=0xff;
tmp[14]=0xff;
tmp[15]=0xff;
tmp[16]=0x01;
tmp[17]=0x01;
tmp[18]=0x01;
tmp[19]=0x01;
tmp[20]=0x66;
tmp[21]=0x66;
tmp[22]=0x66;
tmp[23]=0x66;

tmp[24]=0xf0;
tmp[25]=0xff;
tmp[26]=0xff;
tmp[27]=0xff;

tmp[28]=0x01;
tmp[29]=0x01;
tmp[30]=0x01;
tmp[31]=0x01;
tmp[32]=0x66;
tmp[33]=0x66;
tmp[34]=0x66;
tmp[35]=0x66;

tmp[36]=0xf0;
tmp[37]=0xff;
tmp[38]=0xff;
tmp[39]=0xff;

tmp[40]=0x01;
tmp[41]=0x01;
tmp[42]=0x01;
tmp[43]=0x01;
tmp[44]=0x66;
tmp[45]=0x66;
tmp[46]=0x66;
tmp[47]=0x66;





/*
tmp[1]=times[66][i];
tmp[2]=times[67][i];
tmp[3]=times[68][i];
tmp[4]=times[69][i];
tmp[5]=times[70][i];
tmp[6]=times[71][i];
tmp[7]=times[72][i];
tmp[8]=times[73][i];
tmp[9]=times[74][i];
tmp[10]=times[75][i];
tmp[11]=times[76][i];
*/

data(&tmp);
rotate();
null();
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

	elango_ctl.transfer.tx_buf = elango_ctl.tx_buff;
	elango_ctl.transfer.rx_buf = elango_ctl.rx_buff;
	//elango_ctl.transfer.len = 48;
	spi_message_add_tail(&elango_ctl.transfer, &elango_ctl.msg);


//-----------------------------------------------------------------------------------


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

