#include "holberton.h"

/**
* _puts - that prints a string followed by a new line
* @str: string
*
* Return: void
*/

void _puts(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
