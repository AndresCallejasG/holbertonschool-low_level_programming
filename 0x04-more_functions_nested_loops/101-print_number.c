#include "holberton.h"
/**
* print_number - prints an integer char by char
* @n: The integer to print
*
* Return: void
*/

void print_number(int n)
{
	int i, size;
	long int num, num_temp, dig, div;

	num = n;
	size = 0;
	div = 1;

	if (num < 0)
	{
		num = num * -1;
		_putchar('-');
	}

	num_temp = num;

	while (num_temp != 0)
	{
		size++;
		num_temp /= 10;
		div = div * 10;
	}

	div /= 10;

	for (i = size - 1; i >= 1; i--)
	{
		dig = num / div;
		_putchar((dig % 10) + '0');
		div /= 10;
	}
	_putchar((num % 10) + '0');
}
