#include<stdio.h>
#include<unistd.h>
#include<string.h>
main()
{
char a[100],ch;

int i=0;

FILE *fp;
fp=fopen("test1","r");

while((ch=fgetc(fp))!=EOF)
{

a[i++]=ch;

a[i]='\0';



}

printf("%s\n",a);


}
