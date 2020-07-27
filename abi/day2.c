#include<lpc214x.h>
int main()
{
IODIR0=(0xf<<4)|(0xf<<10);
	while(1)
	{
if(IOPIN1 & (1<<18))

IOCLR0=(1<<4);
else
IOSET0=(1<<4);
}
}
