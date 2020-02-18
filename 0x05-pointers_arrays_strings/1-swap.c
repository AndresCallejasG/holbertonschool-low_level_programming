#include "holberton.h"

/**
* swap_int - swaps the values of two integers
* @a: First integer
* @b: Second integer
*
* Return: void
*/

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;

}
