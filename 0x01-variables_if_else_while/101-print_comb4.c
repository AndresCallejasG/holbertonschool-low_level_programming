#include <stdio.h>
/* more headers goes there */
/**
 * main - prints all possible different combinations of two digits.
 * Return: 0
 */

int main(void)
{
	int i, j, k;

	for (i = 0; i <= 7; i++)
	{
		j = i + 1;
		while (j <= 9)
		{
			k = j + 1;
			while (k <= 9)
			{
				putchar((char) (i + 48));
				putchar((char) (j + 48));
				putchar((char) (k + 48));
				if (!(i == 7 && j == 8 && k == 9))
				{
					putchar(',');
					putchar(' ');
				}
				k++;
			}
			j++;
		}
	}
	putchar('\n');
	return (0);
}
