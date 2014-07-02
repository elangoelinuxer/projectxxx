#include<stdio.h>
#include "check.h"

main()
{

int i,j;

//----------------------------------


i=0;
printf("{");
for( j=0;j<=24 ;j++)
{

if( tamil[i]==0x00 | tamil[i]==0x01 | tamil[i]==0x02 | tamil[i]==0x03 | tamil[i]==0x04 | tamil[i]==0x05 | tamil[i]==0x06 | tamil[i]==0x07 | tamil[i]==0x08 | tamil[i]==0x09 )
{
printf("0x0%x, ",tamil[i]);
}
else 
{
printf("0x%x, ",tamil[i]);
}
i=i+3;

}



if( tamil[i]==0x00 | tamil[i]==0x01 | tamil[i]==0x02 | tamil[i]==0x03 | tamil[i]==0x04 | tamil[i]==0x05 | tamil[i]==0x06 | tamil[i]==0x07 | tamil[i]==0x08 | tamil[i]==0x09 )
{
printf("0x0%x ",tamil[i]);
}
else 
{
printf("0x%x ",tamil[i]);
}

printf("},");


printf("\n");
printf("\n");

//=----------------------------------------------------------------------

i=1;
printf("{");
for( j=0;j<=24 ;j++)
{

if( tamil[i]==0x00 | tamil[i]==0x01 | tamil[i]==0x02 | tamil[i]==0x03 | tamil[i]==0x04 | tamil[i]==0x05 | tamil[i]==0x06 | tamil[i]==0x07 | tamil[i]==0x08 | tamil[i]==0x09 )
{
printf("0x0%x, ",tamil[i]);
}
else 
{
printf("0x%x, ",tamil[i]);
}
i=i+3;

}


if( tamil[i]==0x00 | tamil[i]==0x01 | tamil[i]==0x02 | tamil[i]==0x03 | tamil[i]==0x04 | tamil[i]==0x05 | tamil[i]==0x06 | tamil[i]==0x07 | tamil[i]==0x08 | tamil[i]==0x09 )
{
printf("0x0%x ",tamil[i]);
}
else 
{
printf("0x%x ",tamil[i]);
}



printf("},");


printf("\n");
printf("\n");

//-----------------------------------------------------------------------


i=2;
printf("{");
for( j=0;j<=24 ;j++)
{

if( tamil[i]==0x00 | tamil[i]==0x01 | tamil[i]==0x02 | tamil[i]==0x03 | tamil[i]==0x04 | tamil[i]==0x05 | tamil[i]==0x06 | tamil[i]==0x07 | tamil[i]==0x08 | tamil[i]==0x09 )
{
printf("0x0%x, ",tamil[i]);
}
else 
{
printf("0x%x, ",tamil[i]);
}
i=i+3;

}

if( tamil[i]==0x00 | tamil[i]==0x01 | tamil[i]==0x02 | tamil[i]==0x03 | tamil[i]==0x04 | tamil[i]==0x05 | tamil[i]==0x06 | tamil[i]==0x07 | tamil[i]==0x08 | tamil[i]==0x09 )
{
printf("0x0%x ",tamil[i]);
}
else 
{
printf("0x%x ",tamil[i]);
}


printf("},");


printf("\n");
printf("\n");




}


