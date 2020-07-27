#include<lpc214x.h>
#include "dec.h"
int main()
{
	while(1)
	{
	
DACR=(0<<6);
delay(200);
DACR=(0x3ff<<6);
delay(200);
		}
}
		
	
