# 8051-microcontroller-3
Interfacing a switch with 8051
#include<reg51.h>
sbit led=p2^0;
sbit sw=p2^7;
void delay(unsigned int count)
{
unsigned int i;
while(count)
{
i=115;
while(i>0)
i--;
count--;
}
}
void main()
{
sw=1;
while(1)
{
if(sw==0)
{
led=1;
delay(1000);
led=0;
}
else
{
led=0;
}
}
}
