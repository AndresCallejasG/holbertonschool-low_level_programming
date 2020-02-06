#include <stdio.h>
/* more headers goes there */
/**
 * main - prints alphabet except 'e' and 'q'
 * Return: 0
 */

int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		if (letter == 'e')
			letter++;
		if (letter == 'q')
			letter++;
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
