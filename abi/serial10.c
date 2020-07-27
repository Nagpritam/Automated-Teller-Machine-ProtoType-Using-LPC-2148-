#include<lpc214x.h>
#include"dec.h"
int main()
	{
	int i=0;
	char a[100];
		lcd_init();
	uart_init();
		
while(1)
{
	for(i=0;i<10;i++)
	{
		
while(!(U0LSR & (1<<0)));
      a[i]=U0RBR;
	}
		for(i=0;i<10;i++)
	{
while(!(U0LSR & (1<<5)));
U0THR=a[i];
	
		lcd_data(a[i]);
		if(i==9)
			delay(2000);
			lcd_cmd(0x01);
		
	}
	//if(i==9)
	//lcd_cmd(0x01);
}
}