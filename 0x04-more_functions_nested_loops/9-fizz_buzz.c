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
	int flag;

	for (i = 1; i <= 100; i++)
	{
		flag = 1;

		if (i % 3 == 0)
		{
			flag = 0;
			printf("Fizz");
		}
		if (i % 5 == 0)
		{
			flag = 0;
			printf("Buzz");
		}
		if (flag)
			printf("%d", i);
		if (i <= 99)	
			printf(" ");
	}
	printf("\n");

	return (0);
}
