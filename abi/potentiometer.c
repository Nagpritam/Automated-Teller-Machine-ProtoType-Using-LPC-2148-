#include<lpc214x.h>
#include"dec.h"
int main()
{
int result;
		lcd_init();
adc_init();
while(1)
{
	
	delay(2000);
	lcd_cmd(0x01);
while(!(AD0GDR & (1<<31)));
result=(AD0GDR & (0x3ff<<6));
result>>=6;
lcd_display(result);
}
}