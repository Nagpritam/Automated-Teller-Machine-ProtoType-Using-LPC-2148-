#include<lpc214x.h>
#include"dec.h"
void amount_rec(int h)
{
int i;
int a[5];
	int g;
	int fg=0;
	char asd[]={"**SUCESSFUL**"};
	char asd1[]={"PROCESSING......"};
	char asd2[]={"PLEASE WAIT....."};
		char str[]={"THANK YOU......."};
		char str12[]={"VISIT AGAIN....."};
		char str1[]={"AMOUNT ERROR"};
uart_init();
lcd_init();
for(i=0;i<5;i++)
{		
while(!(U0LSR & (1<<0)));
a[i]=U0RBR;
	fg=((fg*10)+(a[i]-0x30));
}
for(i=0;i<5;i++)
{
while(!(U0LSR & (1<<5)));
U0THR=a[i];
		lcd_data(a[i]);
}
delay(1000);
lcd_cmd(0x01);

g=amountcheck(fg,h);
if(g==1)
{
	for(i=0;i<16;i++)
	{
lcd_data(asd1[i]);
  }
	lcd_cmd(0x01);
	for(i=0;i<16;i++)
	{
lcd_data(asd2[i]);
  }
delay(5000);
lcd_cmd(0x01);
for(i=0;i<13;i++)
	{
lcd_data(asd[i]);
  }
delay(5000);
	lcd_cmd(0x01);
	for(i=0;i<16;i++)
	{
lcd_data(str[i]);
  }
delay(3000);
	
	lcd_cmd(0x01);
	for(i=0;i<16;i++)
	{
lcd_data(str12[i]);
  }
    delay(3000);
	  IOSET0=(1<<25);
		delay(2000);
		IOCLR0=(1<<25);
}
else
{
for(i=0;i<12;i++)
	{
		lcd_data(str1[i]);
	}
	delay(5000);
	lcd_cmd(0x01);
}
}
