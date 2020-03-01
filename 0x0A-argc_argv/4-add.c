#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds positive numbers
 *
 * @argc: The number of command line arguments
 * @argv: An array containing the program command line arguments
 *
 * Return: 0
 * 1 - If one of the argv is not a digit
 */
int main(int argc, char *argv[])
{
	int result, i, digit;

	result = 0;
	i = 0;
	digit = 0;

	for (i = 1; i < argc; i++)
	{
		if (isdigit(*argv[i]))
		{
			digit = atoi(argv[i]);
			result += digit;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", result);
	return (0);
}
