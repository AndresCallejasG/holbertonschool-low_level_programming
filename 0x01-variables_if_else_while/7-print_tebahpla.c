#include <stdio.h>
/* more headers goes there */
/**
 * main - print reverse alphabet
 * Return: 0
 */

/* betty style doc for function main goes there */
int main(void)
{
	char letter = 'z';

	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}
	putchar('\n');
	return (0);
}
