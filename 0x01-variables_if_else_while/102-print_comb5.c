#include <stdio.h>
/* more headers goes there */
/**
 * main - all possible combinations of two two-digit numbers.
 * Return: 0
 */

int main(void)
{
	int i, j, k, l;
	int dig1, dig2;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			dig1 = i;
			dig2 = j;
			for (k = dig1; k <= 9; k++)
			{
				l = dig2 + 1;
				while (l <= 9)
				{
					putchar((char) (i + 48));
					putchar((char) (j + 48));
					putchar(' ');
					putchar((char) (k + 48));
					putchar((char) (l + 48));
					if (!(i == 9 && j == 8 && k == 9 && l == 9))
					{
						putchar(',');
						putchar(' ');
					}
					l++;
				}
				dig2 = -1;
			}
			/* break when the first two digit number is 98  */
			if (i == 9 && j == 8)
				break;
		}
	}
	putchar('\n');
	return (0);
}
