#include<lpc214x.h>
#include"dec.h"
int main()
	{
	int i=0,count;
	char a[100];
	uart_init();
		
//while(1)
//{
	i = 0;
	while(1)
	{
		
while(!(U0LSR & (1<<0)));
a[i]=U0RBR;
		if(a[i]=='\n')
			break;
		else
			i++;
		count++;
	}
	i = 0;
	
		while(i<count)
	{
while(!(U0LSR & (1<<5)));
U0THR=a[i];
		i2c_init(a[i]);
		i++;
	}
}
//}
