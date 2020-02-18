#include "holberton.h"

/**
* puts_half - that prints half of a string, followed by a new line
* @str: string
*
* Return: void
*/

void puts_half(char *str)
{
	int i, length, middle;

	i = 0;
	length = 0;
	middle = 0;

	while (str[length] != '\0')
	{
		length++;
	}
	if (length % 2 == 0)
	{
		middle = length / 2;
	}
	else
	{
		middle = ((length - 1) / 2) + 1;
	}
	for (i = middle; i < length; i++)
	{
		_putchar(str[i]);

	}
	_putchar('\n');
}
