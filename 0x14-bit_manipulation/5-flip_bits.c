#include "holberton.h"
/**
* flip_bits -  returns the number of bits you
* would need to flip to get from one number
* to another.
*
* @n: number 1
* @m: number 2
*
* Return: count of diferent bits
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int dif;
	unsigned int i = 0;

	dif = n ^ m;

	while (dif)
	{
		if (dif & 1)
		{
			i++;
		}
		dif >>= 1;
	}
	return (i);
}
