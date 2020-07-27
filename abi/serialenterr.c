#include<lpc214x.h>
#include<stdio.h>
#include<string.h>
#include"dec.h"
void serial_rec(void)
	{
		char id[4][6]={"123456","141386","145053","140760"};
		char type[]={"ENTER PASSWORD"};
		char user1[]={"ENTER YOUR ID"};
		char user2[]={"WRONG ID"};
	  int i=0,count=0;
	  char a[6];
		int c=0;
		lcd_cmd(0x01);
for(i=0;i<6;i++)
   {		
    while(!(U0LSR & (1<<0)));
    a[i]=U0RBR;
   }
for(i=0;i<6;i++)
{
while(!(U0LSR & (1<<5)));
U0THR=a[i];
		lcd_data(a[i]);
}
delay(1000);
lcd_cmd(0x01);
	c=stringcheck(a);
if((c==1)|(c==2)|(c==3)|(c==4))
{
	for(i=0;i<14;i++)
	{
lcd_data(type[i]);
}
delay(2000);
passrec(c);
}
else
{
	lcd_cmd(0x01);
for(i=0;i<8;i++)
	{
lcd_data(user2[i]);
}
delay(2000);
lcd_cmd(0x01);
}
}

