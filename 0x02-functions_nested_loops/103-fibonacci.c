#include "holberton.h"
#include <stdio.h>
/**
* main - prints the sum of the even-valued terms from fibonnacci
*
* Return: 0
*/

int main(void)
{
	int k;
	long int i, j;
	long int sum;

	i = 1;
	j = 2;
	sum = 2;
	k = 0;

	while (k < 4000000)
	{
		if (k % 2 == 0)
			sum += k;
		k = i + j;
		i = j;
		j = k;
	}
	printf("%ld", sum);
	printf("\n");

	return (0);
}
