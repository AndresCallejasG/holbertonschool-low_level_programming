#include "holberton.h"

/**
* print_last_digit - prints the last digit of a number.
* @n: The int to use
*
* Return: last digit of n
*/

int print_last_digit(int n)
{
	int lastn;

	lastn = n % 10;

	if (n < 0)
		lastn = lastn * -1;
	_putchar (lastn + '0');

	return (lastn);
}
