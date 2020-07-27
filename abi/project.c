#include<lpc214x.h>
#include"dec.h"
int main()
{
	char init[9]={"NACC BANK"};
	char wel[]={"WELCOME"};
	int i;
	char sdfg[]={"TRY AGAIN"};
	//ext_int_init();
lcd_init();
uart_init();
	while(1)
	{
		lcd_cmd(0x01);
	for(i=0;i<9;i++)
	{
	lcd_data(init[i]);
	}
    IODIR0|=(1<<25);
		for(i=0;i<3;i++)
		{
	if(!(IOPIN1 & (1<<18)))
	{
		lcd_cmd(0x01);
		for(i=0;i<7;i++)
		{
		lcd_data(wel[i]);
		}
		IOSET0=(1<<25);
		delay(2000);
		IOCLR0=(1<<25);
		data();	
 }
	if(i==3)
	{
	for(i=0;i<9;i++)
		{
		lcd_data(sdfg[i]);
		}
	}
	delay(1000);
	lcd_cmd(0x01);
		}
		delay(1000);
		}
	WDTC=0x0D693A40;
  WDMOD=0x03;
  WDFEED=0xAA;
  WDFEED=0x55;
}
