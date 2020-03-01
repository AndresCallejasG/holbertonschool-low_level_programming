#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints all arguments it receives.
 *
 * @argc: The number of command line arguments
 * @argv: An array containing the program command line arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int result;

	if (argc == 3)
	{
		result = (atoi(argv[1])) * (atoi(argv[2]));
		printf("%d\n", result);
		return (0);
	}
	else
		printf("Error\n");
	return (1);
}
