#include <lpc214x.h>
#include "dec.h"
void timer (void)
//int main()
{
	int f=0;
	int i=4;
	timer0_init();
  IODIR0=(0xf<<4)|(0xf<<10);
	
	while(i<<14)
	{
		
		
	if(T0IR & (1<<0))
	{
	if(f==0)
	{
	IOSET0=(1<<25);
  f=1;
	T0IR=(1<<0);
	}
}
	else
	{
	IOCLR0=(1<<25);
	f=0;
	T0IR=(1<<0);
	}
	}
	//T0IR=(1<<0);
	}

void timer0_init(void)
{
  T0TCR=(1<<0);
	T0CTCR=0;
	T0PR=14;
	T0MR0=1000000;
	T0MCR=(1<<1)|(1<<0);
}
