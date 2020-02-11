#include "holberton.h"
/**
* times_table - print times table
*
* Return: void
*
*/

void times_table(void)
{
	int i, j, mult;
	int dig1, dig2;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');
		for (j = 1; j <= 9; j++)
		{
			mult = i * j;
			dig1 = mult / 10;
			dig2 = mult % 10;
			_putchar(',');
			_putchar(' ');
			if (dig1 != 0)
			{
				_putchar(dig1 + '0');

			}
			else
				_putchar(' ');
			_putchar(dig2 + '0');
		}
		_putchar('\n');
	}
}
