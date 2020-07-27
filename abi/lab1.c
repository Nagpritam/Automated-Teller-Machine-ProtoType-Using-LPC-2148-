#include<lpc214x.h>
void delay(int count);
int main()
{
IODIR0=0X1E78;
while(1)
{
IOSET0=0X1E78;
delay(50);
IOCLR0=0X1E78;
delay(50);
}
}
void delay(int count)
{
int i,j;
for(i=0;i<count;i++)
for(j=0;j<50000;j++);
}
