#include<lpc214x.h>
void uart_init(void)
{
	PINSEL0 |=(1<<0)|(1<<2);
U0LCR=(1<<7);
U0DLL=97;
U0DLM=0;	
U0LCR=(0<<7)|3;
}
