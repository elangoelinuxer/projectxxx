#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
 
 
int main(int argc ,char *argv[])
{
    int valuefd, exportfd, directionfdi,exportfd1,exportfd2;
    printf("pwm test running...\n");
 
if(argc!=5)
{

printf("pass the correct 5 arguments    1)./a.out  2)<period>  3)<duty>  4)<no of times>  5)<delay> \n");


}

else
{
//  .......exporting slots

 exportfd = open("/sys/devices/bone_capemgr.9/slots", O_WRONLY);
    if (exportfd < 0)
    {
        printf("Cannot open    bone_capemgr.9/slots .    to export it\n");
        exit(1);
    }

    write(exportfd, "am33xx_pwm", 15);
    close(exportfd);

    printf("dtbo  exported successfully\n");

//..........pin muxing

 exportfd = open("/sys/devices/bone_capemgr.9/slots", O_WRONLY);
    if (exportfd < 0)
    {
        printf("Cannot open   bone_capemgr.9/slots ..    to export it\n");
        exit(1);
    }

    write(exportfd, "bone_pwm_P8_13", 15);
    close(exportfd);

    printf("pinP8_13 exported successfully\n");



//........period
 
    exportfd1 = open("/sys/devices/ocp.3/pwm_test_P8_13.15/period", O_WRONLY);
    if (exportfd1 < 0)
    {
        printf("Cannot open period to export it\n");
        exit(1);
    }
 
    write(exportfd1, argv[1], 8);
    close(exportfd1);
 
    printf("period exported successfully\n");
 
 
//........duty
 
    exportfd1 = open("/sys/devices/ocp.3/pwm_test_P8_13.15/duty", O_WRONLY);
    if (exportfd1 < 0)
    {
        printf("Cannot open duty to export  it\n");
        exit(1);
    }
  
  
    write(exportfd1, argv[2], 8);
 
    close(exportfd1);

    printf("duty exported successfully\n");



exportfd2 = open("/sys/devices/ocp.3/pwm_test_P8_13.15/run", O_WRONLY);
    if (exportfd2 < 0)
    {
        printf("Cannot open run to export  it\n");
        exit(1);
    }

int a=0,b,c;

b=atoi(argv[3]);

c=atoi(argv[4]);


while(a<b)
{

write(exportfd2,"0", 4);

ondelay();

write(exportfd2,"1", 4);

offdelay();

++a;

}


write(exportfd2,"0", 4);

close(exportfd2);


}


}


offdelay()
{
int i;
printf("hai");

for(i=0;i<200000000;i++);

}

ondelay()
{

int j;

for(j=0;j<100000000;j++);


}





