
#include "RGB_LED.h"

void RGB_LED (u8 R, u8 G, u8 B)
{
	TIMER0_OCR0_WRITE(R);
	TIMER1_OCR1A_WRITE(G);
	TIMER1_OCR1B_WRITE(B);
}