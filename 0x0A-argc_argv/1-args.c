#include "holberton.h"
#include <stdio.h>
/**
 * main - prints the number of arguments passed into it..
 *
 * @argc: The number of command line arguments
 * @argv: An array containing the program command line arguments
 *
 * Return: pointer to memory area s
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
