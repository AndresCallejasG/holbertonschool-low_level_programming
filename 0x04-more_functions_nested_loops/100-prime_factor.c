#include "holberton.h"
#include <stdio.h>
/**
* main - prints the largest prime factor of num
*
* Return: 0
*/

int main(void)
{
	long int num, div;

	num = 612852475143;
	div = 2;
	while (num != 1)
	{
		if ((num % div) == 0)
		{
			num /= div;
		}
		else
			div++;

	}
	printf("%ld", div);
	printf("\n");

	return (0);
}
