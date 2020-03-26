#include "holberton.h"
/**
 * print_binary - prints the binary representation of a number.
 *
 * @n: number to convert
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	if (n == 0 || n == 1)
	{
		_putchar(n + 48);
		return;
	}
	print_binary(n >> 1);
	_putchar(48 + (n & 1));
}
