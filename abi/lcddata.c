#include<lpc214x.h>

#include "dec.h"

void lcd_init(void)
{
	IODIR0|=(0xff<<15)|(0x0d<<10);
lcd_cmd(0x38);
lcd_cmd(0x0e);
lcd_cmd(0x80);
lcd_cmd(0x01);
}
void lcd_cmd(char c)
{
IOPIN0=(c << 15);
IOCLR0=(1<<13);//selecting command register
IOCLR0=(1<<12);//write
IOSET0=(1<<10);//enable
delay(50);
IOCLR0=(1<<10);
}
void lcd_data(char c)
{
IOPIN0=(c << 15);
IOSET0=(1<<13);//selecting command register
IOCLR0=(1<<12);//write
IOSET0=(1<<10);//enable
delay(50);
IOCLR0=(1<<10);
}
//void lcd_display(int count)
//{
//int temp;
//	temp=count;
//	temp=temp%10;
//	//temp=temp*10;
//	count=count/10;
//	//temp=temp+count;


//	lcd_data(temp+0x30);
//	lcd_data(count+0x30);
//}
void lcd_display(long int n)
{
long int result=0;
	while(n)
	{
	result=(10*result + (n%10));
		n=n/10;
	}
	while (result)
	{
	lcd_data((result%10)+0x30);
		result=result/10;
	}
}

	
