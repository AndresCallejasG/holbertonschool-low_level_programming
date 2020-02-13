#include "holberton.h"
/**
* print_diagonal - draws a diagonal line on the terminal.
* @n: number of / to print
*
* Return: void
*/

void print_diagonal(int n)
{
	int i, j, cont;

	cont = 0;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < cont; j++)
			{
				_putchar(' ');

			}
			_putchar(92);
			_putchar('\n');
			cont++;
		}
	}
	else
	_putchar('\n');
}
