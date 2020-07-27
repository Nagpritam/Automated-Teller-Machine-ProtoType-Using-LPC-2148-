#include<lpc214x.h>
#include"dec.h"
void passrec(int sd)
{
int i;
char a[4];
	int g;
	char asd[]={"ENTER AMOUNT"};
	char wrongp[]={"WRONG PASSWORD"};
uart_init();
lcd_init();
for(i=0;i<4;i++)
{		
while(!(U0LSR & (1<<0)));
a[i]=U0RBR;
}
for(i=0;i<4;i++)
{
while(!(U0LSR & (1<<5)));
U0THR=a[i];
		lcd_data('*');
}
delay(1000);
lcd_cmd(0x01);
g=passcheck(a,sd);
if((g==1)|(g==2)|(g==3)|(g==4))
{
for(i=0;i<12;i++)
	{
lcd_data(asd[i]);
  }
delay(2000);
	amount_rec(g);
}
else
{
for(i=0;i<11;i++)
	{
lcd_data(wrongp[i]);
  }
delay(2000);
}
}
