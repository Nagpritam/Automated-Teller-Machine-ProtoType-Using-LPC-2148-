#include<lpc214x.h>
#include "dec.h"
int main()
{
	int count=0;
	 int flag=0;
	while(1)
	{
			if(flag==0)
			{
				for(count=0;count<0x3ff;count++)
				{
		    DACR=(count<<6);
				}
				flag=1;
			}
			else
			{
				for(count=0x3ff;count>0;count--)
				{
         DACR=(count<<6);
				}
			flag=0;
			}
		
}
		}
	
