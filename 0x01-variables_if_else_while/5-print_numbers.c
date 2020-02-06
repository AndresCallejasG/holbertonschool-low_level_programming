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
		putchar(i);
	}
	putchar('\n');
	return (0);
}
