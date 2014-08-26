#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
main(int argc ,char *argv[])
{

FILE *fd1,*fd2;

char a[30],ch;
int i;

int x1,x2=0,x3;

//---------------------------------------------------------

//---------------------------------------------------------

x1=atoi(argv[1]);

printf("%d..",x1);

fd1=fopen("data","r");

if(fd1==-1)
{
perror("fopen");
return;
}

fd2=fopen("bmp_array.h","wt+");

if(fd2==-1)
{
perror("fopen");
return;
}

bzero(a,sizeof(a));

i=0;

char bmp[]="u8 bmp[][48]={";

fputs(bmp,fd2);


while((ch=fgetc(fd1))!=EOF)
{

if(ch!=10)
{

if(x2==0)
{
fputc('{',fd2);
}

if(x2<x1)
{

fputc('0',fd2);

fputc('x',fd2);

fputc(ch,fd2);

ch=fgetc(fd1);

fputc(ch,fd2);

fputc(',',fd2);

++x3;
}

if(x3>=x1 && x3<48)
{

while(x3<48)
{
fputc('0',fd2);

fputc('x',fd2);

fputc('0',fd2);

fputc('0',fd2);

fputc(',',fd2);

++x3;

}

x3=0;

}

}  // outer if

++x2;

if(x2==x1)
{

fputc('}',fd2);
fputc(',',fd2);
x2=0;

}

}  // end of while	

fputc('}',fd2);
fputc(';',fd2);

fclose(fd1);
fclose(fd2);


}
