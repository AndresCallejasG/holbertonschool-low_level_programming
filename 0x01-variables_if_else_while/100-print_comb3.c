#include <stdio.h>
/* more headers goes there */
/**
 * main - prints all possible different combinations of two digits.
 * Return: 0
 */

int main(void)
{
	int i, j;

	for (i = 0; i <= 8; i++)
	{
		j = i + 1;
		while (j <= 9)
		{
			putchar((char) (i + 48));
			putchar((char) (j + 48));
			if (!(i == 8 && j == 9))
			{
				putchar(',');
				putchar(' ');
			}
		j++;
		}
	}
	putchar('\n');
	return (0);
}
