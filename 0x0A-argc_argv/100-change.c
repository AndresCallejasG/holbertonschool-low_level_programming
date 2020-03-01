#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


/**
 * main - minimum number of coins to make change
 *
 * @argc: The number of command line arguments
 * @argv: An array containing the program command line arguments
 *
 * Return: 0: print number of coins or 0 if number is negative
 * 1 - If one of the argv is not a digit
 */
int main(int argc, char *argv[])
{
	int count, i, amount;
	int coints[5] = {25, 10, 5, 2, 1};

	count = 0;
	i = 0;
	amount = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (_isNumber(argv[1]))
		amount = atoi(argv[1]);
	else
	{
		printf("Error\n");
		return (1);
	}

	while (amount > 0)
	{
		if (amount / coints[i] >= 1)
		{
			count += amount / coints[i];
			amount -= coints[i] * (amount / coints[i]);
		}
		else
		{
			i++;
		}
	}
	if (amount < 0)
		printf("0\n");
	else
		printf("%d\n", count);
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

	if (number[0] == '-')
		i++;

	for (; number[i] != 0; i++)
	{
	if (!isdigit(number[i]))
		return (0);
	}
	return (1);
}
