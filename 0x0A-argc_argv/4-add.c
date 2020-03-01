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
	int result, i, number;

	result = 0;
	i = 0;
	number = 0;

	for (i = 1; i < argc; i++)
	{
		if (_isNumber(argv[i]))
		{
			number = atoi(argv[i]);
			result += number;
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
/**
 * _isNumber - check if the char given is a number
 *
 * @number: *char to check
 *
 * Return: 1 If it is a number
 * 0 otherwise
 */

int _isNumber(char number[])
{
	int i = 0;

	for (i = 0; number[i] != 0; i++)
	{
	if (!isdigit(number[i]))
		return (0);
	}
	return (1);
}
