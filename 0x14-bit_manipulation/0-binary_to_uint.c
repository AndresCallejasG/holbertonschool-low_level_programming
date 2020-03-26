#include "holberton.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int.
 *
 * @b: string with a binary num
 *
 * Return: b as decimal
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal_num = 0;
	int base = 1, len = 0, i = 0;

	if (!b)
		return (0);

	while (b[i] != '\0')
	{
		i++;
		len++;
	}

	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		if (b[i] == '1')
			decimal_num += base;
		base = base * 2;
	}

	return (decimal_num);
}
