#include<stdio.h>
#include "tamil.h"

main()
{

int i,j;

int count=0;

FILE *fp;

fp=fopen("new.h","a");


//----------------------------------


i=0;
fprintf(fp,"{");

for( j=0;j<=24 ;j++)
{

if( tamil[i]==0x00 | tamil[i]==0x01 | tamil[i]==0x02 | tamil[i]==0x03 | tamil[i]==0x04 | tamil[i]==0x05 | tamil[i]==0x06 | tamil[i]==0x07 | tamil[i]==0x08 | tamil[i]==0x09 )
{

fprintf(fp,"0x0%x,",tamil[i]);
count++;

}
else 
{
fprintf(fp,"0x%x,",tamil[i]);
count++;

}
i=i+3;

}

if( tamil[i]==0x00 | tamil[i]==0x01 | tamil[i]==0x02 | tamil[i]==0x03 | tamil[i]==0x04 | tamil[i]==0x05 | tamil[i]==0x06 | tamil[i]==0x07 | tamil[i]==0x08 | tamil[i]==0x09 )
{
fprintf(fp,"0x0%x",tamil[i]);
count++;

}
else 
{
fprintf(fp,"0x%x",tamil[i]);
count++;
}

fprintf(fp,"},");

fprintf(fp,"\n");

//=----------------------------------------------------------------------

i=1;
fprintf(fp,"{");
for( j=0;j<=24 ;j++)
{

if( tamil[i]==0x00 | tamil[i]==0x01 | tamil[i]==0x02 | tamil[i]==0x03 | tamil[i]==0x04 | tamil[i]==0x05 | tamil[i]==0x06 | tamil[i]==0x07 | tamil[i]==0x08 | tamil[i]==0x09 )
{
fprintf(fp,"0x0%x,",tamil[i]);
}
else 
{
fprintf(fp,"0x%x,",tamil[i]);
}
i=i+3;

}


if( tamil[i]==0x00 | tamil[i]==0x01 | tamil[i]==0x02 | tamil[i]==0x03 | tamil[i]==0x04 | tamil[i]==0x05 | tamil[i]==0x06 | tamil[i]==0x07 | tamil[i]==0x08 | tamil[i]==0x09 )
{
fprintf(fp,"0x0%x",tamil[i]);
}
else 
{
fprintf(fp,"0x%x",tamil[i]);
}


fprintf(fp,"},");


fprintf(fp,"\n");

//-----------------------------------------------------------------------


i=2;
fprintf(fp,"{");
for( j=0;j<=24 ;j++)
{

if( tamil[i]==0x00 | tamil[i]==0x01 | tamil[i]==0x02 | tamil[i]==0x03 | tamil[i]==0x04 | tamil[i]==0x05 | tamil[i]==0x06 | tamil[i]==0x07 | tamil[i]==0x08 | tamil[i]==0x09 )
{
fprintf(fp,"0x0%x,",tamil[i]);
}
else 
{
fprintf(fp,"0x%x,",tamil[i]);
}
i=i+3;

}

if( tamil[i]==0x00 | tamil[i]==0x01 | tamil[i]==0x02 | tamil[i]==0x03 | tamil[i]==0x04 | tamil[i]==0x05 | tamil[i]==0x06 | tamil[i]==0x07 | tamil[i]==0x08 | tamil[i]==0x09 )
{
fprintf(fp,"0x0%x",tamil[i]);
}
else 
{
fprintf(fp,"0x%x",tamil[i]);
}

fprintf(fp,"},");

fprintf(fp,"\n");
fprintf(fp,"\n");
fprintf(fp,"\n");

fclose(fp);

printf("\n%d\n",count);

}


