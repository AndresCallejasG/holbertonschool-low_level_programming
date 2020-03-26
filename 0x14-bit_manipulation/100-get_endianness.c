#include "holberton.h"
/**
* get_endianness - function that checks the endianness.*
*
* Return: 0 if big endian, 1 if little endian
*/
int get_endianness(void)
{
	unsigned int num = 1;
	char *c = (char *)&num;

	if (*c)
		return (1);
	return (0);
}
