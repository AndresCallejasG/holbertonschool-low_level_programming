#include "holberton.h"
#include <stdio.h>
#include <stdbool.h>
/**
* main - Fizz-Buzz test
*
* Return: 0
*/

int main(void)
{
	int i;
	bool mult;

	for (i = 1; i <= 100; i++)
	{
		mult = false;

		if (i % 3 == 0)
		{
			mult = true;
			printf("Fizz");
		}
		if (i % 5 == 0)
		{
			mult = true;
			printf("Buzz");
		}
		if (!mult)
			printf("%d", i);
		printf(" ");
	}
	printf("\n");

	return (0);
}
