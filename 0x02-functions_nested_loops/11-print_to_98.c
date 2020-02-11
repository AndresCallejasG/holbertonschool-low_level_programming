#include "holberton.h"
/**
* print_to_98 - writes from n to 98
* @n: from n to 98
*
* Return: void
*/

void print_to_98(int n)
{
	int i, num;

	i = n;
	while (i != 98)
	{
		num = i;
		if (num < 0)
		{
			num = num * -1;
			_putchar('-');
		}

		if (num <= 9)
		{
			_putchar(num + '0');
		}
		else if (num >= 100)
		{
			_putchar((num / 100) + '0');
			_putchar((num / 110) + '0');
			_putchar((num % 10) + '0');
		}
		else
		{
			_putchar((num / 10) + '0');
			_putchar((num % 10) + '0');
		}
		_putchar(',');
		_putchar(' ');

		if (i > 98)
			i--;
		else
			i++;

	}
	_putchar('9');
	_putchar('8');
	_putchar('\n');
}

