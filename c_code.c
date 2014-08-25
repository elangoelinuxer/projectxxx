#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
main()
{

FILE *fd1,*fd2;

char a[30],ch;
int i;

fd1=fopen("data","r");

if(fd1==-1)
{
perror("fopen");
return;
}

fd2=fopen("output","w");

if(fd2==-1)
{
perror("fopen");
return;
}

bzero(a,sizeof(a));

i=0;

//fread(&a,sizeof(a),1,fd1);

char b[100]="char a[1000]={";

fwrite(&b,sizeof(b),1,fd2);

while((ch=fgetc(fd1))!=EOF)
{

if(ch!=10)
{

fputc('0',fd2);

fputc('x',fd2);

fputc(ch,fd2);

ch=fgetc(fd1);

fputc(ch,fd2);

fputc(',',fd2);

}

}	

fputc('}',fd2);
fputc(';',fd2);

fclose(fd1);
fclose(fd2);



}

