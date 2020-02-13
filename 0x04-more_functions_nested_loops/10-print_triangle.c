#include "holberton.h"
/**
* print_triangle -  prints a triangle, followed by a new line.
* @size: size of the square to print
*
* Return: void
*/

void print_triangle(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = i + 1; j < size; j++)
			{
				_putchar(' ');

			}
			for (j = 0; j < i + 1; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	_putchar('\n');
}
