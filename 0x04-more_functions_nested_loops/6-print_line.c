#include "holberton.h"
/**
* print_line - print n '_' to stdout
* @n: number of lines to print
*
* Return: void
*/

void print_line(int n)
{
	int i;

	if (n > 0)
	{

		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
