#include<lpc214x.h>
#include"dec.h"
//void chaser (void)
int main()
	{
	int i;
	IODIR0=(0xf<<4)|(0xf<<10);
	//ext_int_init();
		timer0_init();
	while(1)
	{			
for(i=4;i<=13;i++)
{

	
	
IOSET0=(1<<i);
	//delay(50);
	//while(!(T0IR & (1<<0)));
if(i==8)
i=i+1;
IOCLR0=(1<<i);
//T0IR=1;
}
}

}
