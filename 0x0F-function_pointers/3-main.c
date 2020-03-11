#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - print the result of diferent operations.
 *
 * @argc: number of arguments
 * @argv: vector of arguments
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	char *op;
	int num1, num2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	op = argv[2];
	if (!(op[0] == '+' || op[0] == '-' || op[0] == '*' ||
	op[0] == '/' || op[0] == '%'))
	{
		printf("Error\n");
		exit(99);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if ((op[0] == '/' || op[0] == '%') && (num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", (*get_op_func(op))(num1, num2));
	return (0);
}
