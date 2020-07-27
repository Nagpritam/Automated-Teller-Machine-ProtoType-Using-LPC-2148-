#include <lpc214x.h>
#include "dec.h"
void ext_timerint_init(void)
{
PINSEL0=(1<<7)|(0<<6);
VICIntEnable=(1<<4);
VICIntSelect=(0<<4);
VICVectCntl2=(1<<5)|(4);
VICVectAddr2=(long)isr_eint1;
EXTMODE=(0<<1);
EXTPOLAR=(1<<1);
//while(1);
}