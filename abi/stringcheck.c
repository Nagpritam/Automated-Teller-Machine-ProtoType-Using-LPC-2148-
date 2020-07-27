#include<lpc214x.h>
#include<string.h>
#include "dec.h"
int stringcheck(char edf[])
{
	char id1[6]={"123456"};
	char id2[6]={"141386"};
		char id3[6]={"145053"};
		char id4[6]={"140760"};
if(strncmp(edf,id1,6)==0)
{
return 1;
	
}	
else if(strncmp(edf,id2,6)==0)
{

return 2;
}
else if(strncmp(edf,id3,6)==0)
{

return 3;
}
else if(strncmp(edf,id4,6)==0)
{

return 4;
}
else 
	return 0;			
}
