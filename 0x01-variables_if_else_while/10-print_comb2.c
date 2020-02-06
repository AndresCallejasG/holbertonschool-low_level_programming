#include <stdio.h>
/* more headers goes there */
/**
 * main - prints number from 0 to 9
 * Return: 0
 */

int main(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			putchar((char) (i + 48));
			putchar((char) (j + 48));
			if (!(i == 9 && j == 9))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
