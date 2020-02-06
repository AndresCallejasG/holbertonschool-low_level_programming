#include <stdio.h>
/* more headers goes there */
/**
 * main - prints number from 0 to 9
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar((char) (i + 48));
	}
	for (i = 0; i <= 5; i++)
	{
		putchar((char) (i + 97));
	}
	putchar('\n');
	return (0);
}
