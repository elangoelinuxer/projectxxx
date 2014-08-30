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
#include <linux/init.h>
#include <linux/device.h>
#include <linux/mutex.h>
#include <linux/slab.h>
#include <linux/cdev.h>
#include <linux/spi/spi.h>
#include <linux/string.h>
//#include <asm/uaccess.h>


#include<linux/types.h>
#include<linux/stat.h>
#include<linux/fcntl.h>

 
//-------Header files included------

#include "motor.h"               // header file for motor rotation
#include "tamil.h"               // header file for  tamil fonts  hex values .....  
#include "arial_bold_10.h"       // header file for   arial english font  .....
#include "times_8.h"             // header file for times new roman font ......  
#include "bmp.h"               // header file bmp printing //ascii to hex conversion
//#include "bmp_length.h"        // header file to find width of bmp image
#include "bmp_array.h"
#include "image.h"               // header file for fixed image printing   
#include "tamil_string_conv.h"   // header file for tamil font string printing
#include "courier_12.h"



//---macros defined -------
#define SPI_BUFF_SIZE	128
#define USER_BUFF_SIZE	128

#define SPI_BUS 1
#define SPI_BUS_CS1 0
#define SPI_BUS_SPEED 1000000



//-------------
const char this_driver_name[] = "printer";
//------------



//-------------
struct printer_control
{
	struct spi_message msg;
	struct spi_transfer transfer;
	u8 *tx_buff; 
	u8 *rx_buff;
};
struct printer_control printer_ctl;
//------------


//------------
struct printer_dev {
	struct semaphore spi_sem;
	struct semaphore fop_sem;
	dev_t devt;
	struct cdev cdev;
	struct class *class;
	struct spi_device *spi_device;
	char *user_buff;
	u8 test_data;	
};
struct printer_dev printer_dev;
//------------



// all variable declarations and initializations .......
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


//-------------



//---------------
static void printer_prepare_spi_message()
{

//---------motor control part
gpio_request(48,"motor_line1");      // requesting the pin48 of gpio
gpio_export(48,true);                // exporting it to the sysfs entry

gpio_request(49,"motor_line2");
gpio_export(49,true);

gpio_request(60,"motor_line3");     // requesting the pin60 of gpio
gpio_export(60,true);               // exporting it to the sysfs entry

gpio_request(115,"motor_line4");
gpio_export(115,true);

gpio_request(117,"Driver IC enable");
gpio_export(117,true);

gpio_request(45,"strobe1&2");
gpio_export(45,true);

gpio_request(44,"strobe3&4");
gpio_export(44,true);

gpio_request(26,"strobe5&6");
gpio_export(26,true);



spi_message_init(&printer_ctl.msg);
	 	

gpio_direction_output(45,1);
gpio_direction_output(44,1);
gpio_direction_output(26,1);

printer_dev.spi_device->bits_per_word=8;

tmp[0]=tmp[1]=tmp[2]=tmp[3]=tmp[4]=tmp[5]=tmp[6]=tmp[7]=tmp[8]=tmp[9]=tmp[10]=tmp[11]=tmp[12]=tmp[13]=tmp[14]=tmp[15]=tmp[16]=tmp[17]=tmp[18]=tmp[19]=tmp[20]=tmp[21]=tmp[22]=tmp[23]=tmp[24]=tmp[25]=tmp[26]=tmp[27]=tmp[28]=tmp[29]=tmp[30]=tmp[31]=tmp[32]=tmp[33]=tmp[34]=tmp[35]=tmp[36]=tmp[37]=tmp[38]=tmp[39]=tmp[40]=tmp[41]=tmp[42]=tmp[43]=tmp[44]=tmp[45]=tmp[46]=tmp[47]=0;

printk(KERN_ALERT "length is ...........   %d  \n",length);

for(k=0;k<=1;k++)
{

g[k]=(**(buff))-32;
++(*buff);

}

++(*buff);
++(*buff);



// *************  start of switch case for selecting the type of printing ***************************

if(g[0]==94)  //   ~ charcter for the protocol
{

switch(g[1])  //   b  character for the protocol
{

case 66:

//  ################################    start of bmp printing    ##############################


printk(KERN_ALERT "inside switch.....bmp printing.....\n");


//.................new logic..............................


tmp[0]=tmp[1]=tmp[2]=tmp[3]=tmp[4]=tmp[5]=tmp[6]=tmp[7]=tmp[8]=tmp[9]=tmp[10]=tmp[11]=tmp[12]=tmp[13]=tmp[14]=tmp[15]=tmp[16]=tmp[17]=tmp[18]=tmp[19]=tmp[20]=tmp[21]=tmp[22]=tmp[23]=tmp[24]=tmp[25]=tmp[26]=tmp[27]=tmp[28]=tmp[29]=tmp[30]=tmp[31]=tmp[32]=tmp[33]=tmp[34]=tmp[35]=tmp[36]=tmp[37]=tmp[38]=tmp[39]=tmp[40]=tmp[41]=tmp[42]=tmp[43]=tmp[44]=tmp[45]=tmp[46]=tmp[47]=0;


for(k=4;k<=99;k++)
{

++lencheck;

if(lencheck<length)
{

g[k]=(**(buff));
++(*buff);

}
else
{
g[k]=48;
}

}

lencheck=0;

printk(KERN_ALERT "bmp....g[0] %d \n",g[0]);
printk(KERN_ALERT "bmp....g[1] %d \n",g[1]);

printk(KERN_ALERT "bmp....g[2] %d \n",g[2]);
printk(KERN_ALERT "bmp....g[3] %d \n",g[3]);

printk(KERN_ALERT "bmp....g[4] %d \n",g[4]);
printk(KERN_ALERT "bmp....g[5] %d \n",g[5]);


bmp_conv();     //function for bmp conversion



printk(KERN_ALERT "After conversion.... \n");


printk(KERN_ALERT "bmp....g[4] %d \n",g[4]);
printk(KERN_ALERT "bmp....g[5] %d \n",g[5]);


printk(KERN_ALERT "bmp....g[98] %d \n",g[98]);
printk(KERN_ALERT "bmp....g[99] %d \n",g[99]);


gpio_direction_output(45,1);
gpio_direction_output(44,1);
gpio_direction_output(26,1);


printk(KERN_ALERT "tmp[0].......%d \n",tmp[0]);
printk(KERN_ALERT "tmp[47].......%d \n",tmp[47]);


spi_write(printer_dev.spi_device, addr, 48);


rotate();    // motor rotation control ( to include motor.h )


gpio_direction_output(45,0);
gpio_direction_output(44,0);
gpio_direction_output(26,0);




tmp[0]=tmp[1]=tmp[2]=tmp[3]=tmp[4]=tmp[5]=tmp[6]=tmp[7]=tmp[8]=tmp[9]=tmp[10]=tmp[11]=tmp[12]=tmp[13]=tmp[14]=tmp[15]=tmp[16]=tmp[17]=tmp[18]=tmp[19]=tmp[20]=tmp[21]=tmp[22]=tmp[23]=tmp[24]=tmp[25]=tmp[26]=tmp[27]=tmp[28]=tmp[29]=tmp[30]=tmp[31]=tmp[32]=tmp[33]=tmp[34]=tmp[35]=tmp[36]=tmp[37]=tmp[38]=tmp[39]=tmp[40]=tmp[41]=tmp[42]=tmp[43]=tmp[44]=tmp[45]=tmp[46]=tmp[47]=0;



//----------------------------------------------------------
/*


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


//bmp_length();  //function call to set  "var_1"  variable

printk(KERN_ALERT "in main program.....01...%d \n",var_1);


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

//bmp_conv();     //function for bmp conversion

printk(KERN_ALERT "tmp[0].......%d \n",tmp[0]);

spi_write(printer_dev.spi_device, addr, 48);

rotate();    // motor rotation control ( to include motor.h )

gpio_direction_output(45,0);
gpio_direction_output(44,0);
gpio_direction_output(26,0);


tmp[0]=tmp[1]=tmp[2]=tmp[3]=tmp[4]=tmp[5]=tmp[6]=tmp[7]=tmp[8]=tmp[9]=tmp[10]=tmp[11]=tmp[12]=tmp[13]=tmp[14]=tmp[15]=tmp[16]=tmp[17]=tmp[18]=tmp[19]=tmp[20]=tmp[21]=tmp[22]=tmp[23]=tmp[24]=tmp[25]=tmp[26]=tmp[27]=tmp[28]=tmp[29]=tmp[30]=tmp[31]=tmp[32]=tmp[33]=tmp[34]=tmp[35]=tmp[36]=tmp[37]=tmp[38]=tmp[39]=tmp[40]=tmp[41]=tmp[42]=tmp[43]=tmp[44]=tmp[45]=tmp[46]=tmp[47]=0;

lencheck=0;

if(var_2<960)
{
goto ela1;
}

*/
//.................................


/*
for(i=0;i<20;i++)
{

m=0;

tmp[0]=bmp[i][m];
tmp[1]=bmp[i][++m];
tmp[2]=bmp[i][++m];
tmp[3]=bmp[i][++m];
tmp[4]=bmp[i][++m];
tmp[5]=bmp[i][++m];
tmp[6]=bmp[i][++m];
tmp[7]=bmp[i][++m];
tmp[8]=bmp[i][++m];
tmp[9]=bmp[i][++m];
tmp[10]=bmp[i][++m];
tmp[11]=bmp[i][++m];
tmp[12]=bmp[i][++m];
tmp[13]=bmp[i][++m];
tmp[14]=bmp[i][++m];
tmp[15]=bmp[i][++m];
tmp[16]=bmp[i][++m];
tmp[17]=bmp[i][++m];
tmp[18]=bmp[i][++m];
tmp[19]=bmp[i][++m];
tmp[20]=bmp[i][++m];
tmp[21]=bmp[i][++m];
tmp[22]=bmp[i][++m];
tmp[23]=bmp[i][++m];
tmp[24]=bmp[i][++m];
tmp[25]=bmp[i][++m];
tmp[26]=bmp[i][++m];
tmp[27]=bmp[i][++m];
tmp[28]=bmp[i][++m];
tmp[29]=bmp[i][++m];
tmp[30]=bmp[i][++m];
tmp[31]=bmp[i][++m];
tmp[32]=bmp[i][++m];
tmp[33]=bmp[i][++m];
tmp[34]=bmp[i][++m];
tmp[35]=bmp[i][++m];
tmp[36]=bmp[i][++m];
tmp[37]=bmp[i][++m];
tmp[38]=bmp[i][++m];
tmp[39]=bmp[i][++m];
tmp[40]=bmp[i][++m];
tmp[41]=bmp[i][++m];
tmp[42]=bmp[i][++m];
tmp[43]=bmp[i][++m];
tmp[44]=bmp[i][++m];
tmp[45]=bmp[i][++m];
tmp[46]=bmp[i][++m];
tmp[47]=bmp[i][++m];

spi_write(printer_dev.spi_device, addr, 48);

rotate();        // motor rotation control ( to include motor.h )
 
}

for(i=0;i<48;i++)
{
tmp[i]=0;
}
spi_write(printer_dev.spi_device, addr, 48);

break;

*/



//    ########################## end of bmp printing ##########################################

break;


case 84:      // t charcter for tamil printing

//   ################################   tamil printing   ###############################

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

conversion();    // to covert the command line datas to hex values (included in tamil_string_conv.h )

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

spi_write(printer_dev.spi_device, addr, 48);
rotate();   // motor rotation control ( to include motor.h )

}

spi_write(printer_dev.spi_device, addr, 48);
     
break; 

//      ############################# End of tamil printing #################################


case 69:  //e  charcter for english printing  g[1]


//      ########################### Start of english printing ########################################


          printk(KERN_ALERT "inside switch....english printing....\n");

///----------

for(k=2;k<=2;k++)
{

g[k]=(**(buff))-32;
++(*buff);

}

if(g[2]==67)      // c  - courier font  - sizes small ,medium ,large
{



ela:

gpio_direction_output(45,1);
gpio_direction_output(44,1);
gpio_direction_output(26,1);

for(k=3;k<51;k++)
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
m=3;
tmp[0]=courier_12[g[m]][i];
tmp[1]=courier_12[g[++m]][i];
tmp[2]=courier_12[g[++m]][i];
tmp[3]=courier_12[g[++m]][i];
tmp[4]=courier_12[g[++m]][i];
tmp[5]=courier_12[g[++m]][i];
tmp[6]=courier_12[g[++m]][i];
tmp[7]=courier_12[g[++m]][i];
tmp[8]=courier_12[g[++m]][i];
tmp[9]=courier_12[g[++m]][i];
tmp[10]=courier_12[g[++m]][i];
tmp[11]=courier_12[g[++m]][i];
tmp[12]=courier_12[g[++m]][i];
tmp[13]=courier_12[g[++m]][i];
tmp[14]=courier_12[g[++m]][i];
tmp[15]=courier_12[g[++m]][i];
tmp[16]=courier_12[g[++m]][i];
tmp[17]=courier_12[g[++m]][i];
tmp[18]=courier_12[g[++m]][i];
tmp[19]=courier_12[g[++m]][i];
tmp[20]=courier_12[g[++m]][i];
tmp[21]=courier_12[g[++m]][i];
tmp[22]=courier_12[g[++m]][i];
tmp[23]=courier_12[g[++m]][i];
tmp[24]=courier_12[g[++m]][i];
tmp[25]=courier_12[g[++m]][i];
tmp[26]=courier_12[g[++m]][i];
tmp[27]=courier_12[g[++m]][i];
tmp[28]=courier_12[g[++m]][i];
tmp[29]=courier_12[g[++m]][i];
tmp[30]=courier_12[g[++m]][i];
tmp[31]=courier_12[g[++m]][i];
tmp[32]=courier_12[g[++m]][i];
tmp[33]=courier_12[g[++m]][i];
tmp[34]=courier_12[g[++m]][i];
tmp[35]=courier_12[g[++m]][i];
tmp[36]=courier_12[g[++m]][i];
tmp[37]=courier_12[g[++m]][i];
tmp[38]=courier_12[g[++m]][i];
tmp[39]=courier_12[g[++m]][i];
tmp[40]=courier_12[g[++m]][i];
tmp[41]=courier_12[g[++m]][i];
tmp[42]=courier_12[g[++m]][i];
tmp[43]=courier_12[g[++m]][i];
tmp[44]=courier_12[g[++m]][i];
tmp[45]=courier_12[g[++m]][i];
tmp[46]=courier_12[g[++m]][i];
tmp[47]=courier_12[g[++m]][i];

spi_write(printer_dev.spi_device, addr, 48);

rotate();   //this rotate is to control the length of the character 
            // (calling again rotate() will increase the height of the character)
            // motor rotation control ( to include motor.h )

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

}

else if(g[2]==84)  // t for  times new roman font 
{



ela1:

gpio_direction_output(45,1);
gpio_direction_output(44,1);
gpio_direction_output(26,1);


for(k=3;k<51;k++)
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
m=3;
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

spi_write(printer_dev.spi_device, addr, 48);

rotate();   //this rotate is to control the length of the character 
            // (calling again rotate() will increase the height of the character)
            // motor rotation control ( to include motor.h )

}

s++;
gpio_direction_output(45,0);
gpio_direction_output(44,0);
gpio_direction_output(26,0);

printk(KERN_ALERT "lencheck is........... %d  \n",lencheck);

if(lencheck<length)
{
goto ela1;
}

lencheck=0;


}


//             ##################### end of english printing ###################

           break;

case 73:

//            ######################## start of image printing ###########################

           printk(KERN_ALERT "inside switch.....image printing.....\n");


for(i=10;i<11;i++)  //300
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

spi_write(printer_dev.spi_device, addr, 48);

rotate();        // motor rotation control ( to include motor.h )
 
}

for(i=0;i<48;i++)
{
tmp[i]=0;
}
spi_write(printer_dev.spi_device, addr, 48);

break;

//              ###################### end of image printing ############################

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

	memset(printer_ctl.rx_buff, 0, SPI_BUFF_SIZE);
	spi_message_add_tail(&printer_ctl.transfer, &printer_ctl.msg);

}
//*******************************************************************************************************





//-------------------
static ssize_t printer_write(struct file* F, const char *buf[], size_t count, loff_t *f_pos)
{


//printk(KERN_ALERT "count is ...........   %d  \n",count);
//printk(KERN_ALERT "*buf is ...........   %d  \n",*buf);
//printk(KERN_ALERT "buf+1  is ...........   %d  \n",*(buf+1));
//printk(KERN_ALERT "checking ...........   %s  \n",buf);


buff=&buf;
length=count;

ssize_t status = 0;
	
        if (down_interruptible(&printer_dev.spi_sem))
		return -ERESTARTSYS;

	if (!printer_dev.spi_device) 
        {
		up(&printer_dev.spi_sem);
		return -ENODEV;
	}

	printer_prepare_spi_message();

	status = spi_sync(printer_dev.spi_device, &printer_ctl.msg);
	up(&printer_dev.spi_sem);


	if ( copy_from_user(printer_dev.user_buff, buf, count) ) 
        {
         return -EFAULT;
        }

if (status) 
	  {
		sprintf(printer_dev.user_buff, 
		"printer_do_one_message failed : %d\n",
		 status);
	
            }
	else 
        {
		sprintf(printer_dev.user_buff, 
		"Status: %d\n printing ..........  \n");	
	}
		
up(&printer_dev.fop_sem);
return count;
}
//------------------------



//------------------------
static ssize_t printer_read(struct file *filp, char __user *buff, size_t count,
			loff_t *offp)
{
	
        size_t len;
	ssize_t status = 0;

	if (!buff) 
		return -EFAULT;

	if (*offp > 0) 
		return 0;

	if (down_interruptible(&printer_dev.fop_sem)) 
		return -ERESTARTSYS;

/*

      	status = printer_do_one_message();

	if (status) 
        {
		sprintf(printer_dev.user_buff, 
			"printer_do_one_message failed : %d\n",
			status);
	}
	else 
        {
		sprintf(printer_dev.user_buff, 
			"Status: %d\n printing ..........  \n");	
	}

*/
	len = strlen(printer_dev.user_buff);
 
	if (len < count) 
		count = len;

	if (copy_to_user(buff, printer_dev.user_buff, count))  {
		printk(KERN_ALERT "printer_read(): copy_to_user() failed\n");
		status = -EFAULT;
	} else {
		*offp += count;
		status = count;
	}

	up(&printer_dev.fop_sem);
	return status;	
}
//--------------------


//---------------------
static int printer_open(struct inode *inode, struct file *filp)
{	
	int status = 0;

	if (down_interruptible(&printer_dev.fop_sem)) 
		return -ERESTARTSYS;

	if (!printer_dev.user_buff) 
        {
		printer_dev.user_buff = kmalloc(USER_BUFF_SIZE, GFP_KERNEL);
		if (!printer_dev.user_buff) 
			status = -ENOMEM;
	}	

	up(&printer_dev.fop_sem);

	return status;
}
//-----------------


//------------------
static int printer_probe(struct spi_device *spi_device)
{
	if (down_interruptible(&printer_dev.spi_sem))
		return -EBUSY;

	printer_dev.spi_device = spi_device;

	up(&printer_dev.spi_sem);

	return 0;
}
//-------------------


//--------------------
static int printer_remove(struct spi_device *spi_device)
{
	if (down_interruptible(&printer_dev.spi_sem))
		return -EBUSY;
	
	printer_dev.spi_device = NULL;

	up(&printer_dev.spi_sem);

	return 0;
}
//--------------------


//--------------------
static int __init add_printer_device_to_bus(void)
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
//-------------------


//--------------------
static struct spi_driver printer_driver = {
	.driver = {
		.name =	this_driver_name,
		.owner = THIS_MODULE,
	},
	.probe = printer_probe,
	.remove =printer_remove,	

};
//---------------------



//---------------------
static int __init printer_init_spi(void)       // initializing the spi
{
	int error;

	printer_ctl.tx_buff = kmalloc(SPI_BUFF_SIZE, GFP_KERNEL | GFP_DMA);
	if (!printer_ctl.tx_buff) {
		error = -ENOMEM;
		goto printer_init_error;
	}

	printer_ctl.rx_buff = kmalloc(SPI_BUFF_SIZE, GFP_KERNEL | GFP_DMA);
	if (!printer_ctl.rx_buff) {
		error = -ENOMEM;
		goto printer_init_error;
	}

	error = spi_register_driver(&printer_driver);
	if (error < 0) {
		printk(KERN_ALERT "spi_register_driver() failed %d\n", error);
		goto printer_init_error;
	}

	error = add_printer_device_to_bus();
	if (error < 0) {
		printk(KERN_ALERT "add_printer_to_bus() failed\n");
		spi_unregister_driver(&printer_driver);
		goto printer_init_error;	
	}

	return 0;

printer_init_error:

	if (printer_ctl.tx_buff) {
		kfree(printer_ctl.tx_buff);
		printer_ctl.tx_buff = 0;
	}

	if (printer_ctl.rx_buff) {
		kfree(printer_ctl.rx_buff);
		printer_ctl.rx_buff = 0;
	}
	
	return error;
}
//----------------



//-----------------
static const struct file_operations printer_fops = {
	.owner =	THIS_MODULE,
	.read = 	printer_read,
	.open =		printer_open,	
        .write =        printer_write,
     };
//-----------------



//-----------------
static int __init printer_init_cdev(void)      //function to create device node
{
	int error;
	printer_dev.devt = MKDEV(0, 0);

	error = alloc_chrdev_region(&printer_dev.devt, 0, 1, this_driver_name);
	if (error < 0) {
		printk(KERN_ALERT "alloc_chrdev_region() failed: %d \n", 
			error);
		return -1;
	}

	cdev_init(&printer_dev.cdev, &printer_fops);
	printer_dev.cdev.owner = THIS_MODULE;
	
	error = cdev_add(&printer_dev.cdev, printer_dev.devt, 1);
	if (error) {
		printk(KERN_ALERT "cdev_add() failed: %d\n", error);
		unregister_chrdev_region(printer_dev.devt, 1);
		return -1;
	}	

	return 0;
}
//------------------


//-------------------
static int __init printer_init_class(void)          //creating class
{
	printer_dev.class = class_create(THIS_MODULE, this_driver_name);

	if (!printer_dev.class) {
		printk(KERN_ALERT "class_create() failed\n");
		return -1;
	}

	if (!device_create(printer_dev.class, NULL, printer_dev.devt, NULL, 	
			this_driver_name)) {
		printk(KERN_ALERT "device_create(..., %s) failed\n",
			this_driver_name);
		class_destroy(printer_dev.class);
		return -1;
	}
	return 0;
}
//----------------------


//---------------------
static int __init printer_init(void)   
{
	memset(&printer_dev, 0, sizeof(printer_dev));   //allocating memory for printer_dev
	memset(&printer_ctl, 0, sizeof(printer_ctl));   

	sema_init(&printer_dev.spi_sem, 1);      //semaphore initialization function
	sema_init(&printer_dev.fop_sem, 1); 
	
	if (printer_init_cdev() < 0)       //function to create device nodes
		goto fail_1;
	
	if (printer_init_class() < 0)    //function to create class
		goto fail_2;

	if (printer_init_spi() < 0)      //function to initialize spi
		goto fail_3;

	return 0;

fail_3:
	device_destroy(printer_dev.class, printer_dev.devt);
	class_destroy(printer_dev.class);

fail_2:
	cdev_del(&printer_dev.cdev);
	unregister_chrdev_region(printer_dev.devt, 1);

fail_1:
	return -1;
}
//--------------------------------



//--------------------------------
static void __exit printer_exit(void)    // exit function to free all the resources 
{
	spi_unregister_device(printer_dev.spi_device);
	spi_unregister_driver(&printer_driver);

	device_destroy(printer_dev.class, printer_dev.devt);
	class_destroy(printer_dev.class);

	cdev_del(&printer_dev.cdev);
	unregister_chrdev_region(printer_dev.devt, 1);

	if (printer_ctl.tx_buff)
		kfree(printer_ctl.tx_buff);

	if (printer_ctl.rx_buff)
		kfree(printer_ctl.rx_buff);

	if (printer_dev.user_buff)
		kfree(printer_dev.user_buff);
}
//----------------------------------


module_init(printer_init);  // Driver always starts execution from here ( insmod ./printer.ko)
module_exit(printer_exit);  // Driver exectues this function while exit  (rmmod  printer.ko)           


MODULE_AUTHOR("Elango_Palanismay");
MODULE_DESCRIPTION("printer module - SPI driver");
MODULE_LICENSE("GPL");
MODULE_VERSION("0.2");




