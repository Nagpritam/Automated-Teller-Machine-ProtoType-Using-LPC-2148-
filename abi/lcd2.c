#include<lpc214x.h>

#include "dec.h"
int main()
{
	int i,j;
	char *str="abhijeet";
	lcd_init();
	while(1)
	{
	for(j=0x80;j<=0x8f;j++)
	{
		lcd_cmd(j);
		lcd_data(' ');
	for(i=0;str[i] !='\0';i++)
	{
	lcd_data(str[i]);
		delay(50);
	}
}
	for(j=0xc0;j<=0xcf;j++)
	{
		lcd_cmd(j);
		lcd_data(' ');
	for(i=0;str[i] !='\0';i++)
	{
	lcd_data(str[i]);
		delay(50);
	}
}
}
	}
