#include<lpc214x.h>
#include<string.h>
#include "dec.h"
int passcheck(char edf[4],int gh)
{
	char pass1[4]={"0000"};
	char pass2[4]={"0001"};
		char pass3[4]={"0002"};
		char pass4[4]={"0003"};
if((strncmp(edf,pass1,4)==0)&(gh==1))
{
return 1;
	
}	
else if((strncmp(edf,pass2,4)==0)&(gh==2))
{

return 2;
}
else if((strncmp(edf,pass3,4)==0)&(gh==3))
{

return 3;
}
else if((strncmp(edf,pass4,4)==0)&(gh==4))
{

return 4;
}
else 
	return 0;			
}
