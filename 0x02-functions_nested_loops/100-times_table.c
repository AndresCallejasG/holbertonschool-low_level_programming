#include "holberton.h"
/**
* print_times_table - print times table
* @n: times table num
* Return: void
*
*/

void print_times_table(int n)
{
	int i, j, mult;
	int dig1, dig2, dig3;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0');
			for (j = 1; j <= n; j++)
			{
				mult = i * j;
				dig1 = mult / 100 % 10;
				dig2 = mult / 10 % 10;
				dig3 = mult % 10;
				_putchar(',');
				_putchar(' ');
				if (dig1 != 0)
				{
					_putchar(dig1 + '0');
					_putchar(dig2 + '0');
					_putchar(dig3 + '0');
				}
				else if (dig1 == 0 && dig2 != 0)
				{
					_putchar(' ');
					_putchar(dig2 + '0');
					_putchar(dig3 + '0');
				}
				else
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(dig3 + '0');
				}
			}
			_putchar('\n');
		}
	}
}
