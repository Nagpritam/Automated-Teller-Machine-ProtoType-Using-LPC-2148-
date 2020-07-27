#include<lpc214x.h>
#include"dec.h"
void isr_eint1(void)__irq;
//void ext_int_init(void)
//{
//PINSEL0=((PINSEL0 &~(3<<28))|((1<<29)|(0<<28)));
//VICIntEnable=(1<<15);
//VICIntSelect=(0<<15);
//VICVectCntl2=(1<<5)|(15);
//VICVectAddr2=(long)isr_eint1;
//EXTMODE=(0<<1);
//EXTPOLAR=(1<<1);
////while(1);
//}
//void isr_eint1(void)__irq
//{
// extern int i;
//	static int a=0;
//  IODIR0|=(1<<25);
//	if(a==0)
//	{
//	IOSET0=(1<<i)|(1<<25);
//  //delay(200);
//	a=1;
//	}
//	else
//	{
//	IOCLR0=(1<<i)|(1<<25);
//  a=0;
//  i++;
//	}
//		
//	
//	VICVectAddr=0;
//	EXTINT=(1<<1);
//	T0IR=1;
//	//i++;
//	if(i==8)
//		i=9;
//	if(i==14)
//		i=4;
//	
//	
//}   
//void isr_eint1(void)__irq
void data(void)
{
	int i;
  char user[]={"ENTER YOUR ID"};
	char wrongp[]={"WRONG PASSWORD"};
	char wrongi[]={"WRONG ID"};
	char temp[6];
	
	for(i=0;i<3;i++)
	{	
	lcd_cmd(0x01);
	for(i=0;i<13;i++)
	{
	lcd_data(user[i]);
	}
	delay(3000);
	serial_rec();
		
}
}
