#include<lpc214x.h>

#include "dec.h"
void delay(int count)
{
int i,j;
for(i=0;i<count;i++)
for(j=0;j<5000;j++);
}
