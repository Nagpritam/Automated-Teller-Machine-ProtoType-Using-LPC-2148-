#include<lpc214x.h>
#include"dec.h"
int i=4;
int main()
{
	
	IODIR0=(0xf<<4)|(0xf<<10);
timer0_init();
ext_timerint_init();
while(1);
}