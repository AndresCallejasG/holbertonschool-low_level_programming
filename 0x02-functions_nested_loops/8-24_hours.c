#include "holberton.h"
/**
* jack_bauer - print from 00:00 to 23:59
*
* Return: void
*/

void jack_bauer(void)
{
	int hrs, min;
	int dig1, dig2, dig3, dig4;

	for (hrs = 0; hrs < 24; hrs++)
	{
		for (min = 0; min < 60; min++)
		{
			dig1 = hrs / 10;
			dig2 = hrs % 10;
			dig3 = min / 10;
			dig4 = min % 10;
			_putchar(dig1 + '0');
			_putchar(dig2 + '0');
			_putchar(':');
			_putchar(dig3 + '0');
			_putchar(dig4 + '0');
			_putchar('\n');
		}
		
	}
}
