#include "holberton.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc.
 *
 * @b: size to allocate
 * Return: Always 0.
 * if fails 98
 */
void *malloc_checked(unsigned int b)
{
	void *mem;

	mem = malloc(b);
	if (mem == 0)
		exit(98);
	return (mem);
}
