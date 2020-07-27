#include<lpc214x.h>

#define CH (1<<2)
#define CLK_DIV (3<<8)
#define BURST_ON (1<<16)
#define PD_ON (1<<21)
#define ADC_CNTL ( CH | CLK_DIV | BURST_ON | PD_ON)
void adc_init(void)
{
PINSEL1=((PINSEL1 &~(3<<26)) |(1<<26));
AD0CR=ADC_CNTL;
}
