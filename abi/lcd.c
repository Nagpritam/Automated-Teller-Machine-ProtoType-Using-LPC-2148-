#include<lpc214x.h>
void delay(int count);
void lcd_cmd (char c);
void lcd_data  (char c);
int main()
{
	IODIR0=(0xff<<15)|(0x0d<<10);
lcd_cmd(0x38);
lcd_cmd(0x0e);
lcd_cmd(0x80);
lcd_cmd(0x01);
lcd_data('A');

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
void delay(int count)
{
int i,j;
for(i=0;i<count;i++)
for(j=0;j<5000;j++);
}