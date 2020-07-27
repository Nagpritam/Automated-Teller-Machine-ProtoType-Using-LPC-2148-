#include<lpc214x.h>
#include<string.h>
#include "dec.h"
int amountcheck(int edf,int j)
{
	int id1=50000;
	int id2=60000;
		int id3=70000;
		int id4=80000;
if((edf<=id1)&(j==1))
{
return 1;
	
}	
else if((edf<=id2)&(j==2))
{

return 1;
}
else if((edf<=id3)&(j==3))
{

return 1;
}
else if((edf<=id4)&(j==4))
{

return 1;
}
else 
	return 0;			
}
