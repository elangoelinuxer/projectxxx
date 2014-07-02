#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include<error.h>

int main()
{

int fd,fd1,fd2,wr;

//char buffer[100];

	printf("\n Configuring GPIO pin \n ");

	fd = open("/sys/class/gpio/export", O_RDWR, 0644);

	if(fd == -1)
		{
		printf("Failed to open the file\n");
		}

//perror(open);

	write(fd,"1",4);

//perror(write);

	close(fd);

	printf("\n Configuring GPIO direction as output \n");

	fd1 = open("/sys/class/gpio/gpio1/direction" ,O_RDWR, 0644);

	if(fd1 == -1)
		{
		printf("Cannot open file");
		exit(1);
		}

//perror(open);

	write(fd1, "out", 10);

//perror(write); 

	close(fd1);

	printf("Set value as 1");

	fd2 = open("/sys/class/gpio/gpio1/value" ,O_RDWR, 0777);

	if(fd2 == -1)
		{
		printf("cannot open file");
		exit(1);
		}
//perror(open);

	write(fd2,"1",4);

//perror(write);

	sleep(1);
//wr=~wr;
	write(fd2,"0",4);

	perror(write); 

	close(fd2);
return 0;
}










