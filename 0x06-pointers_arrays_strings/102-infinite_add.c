#include "holberton.h"
/**
* infinite_add - adds two numbers.
* @n1: first integer
* @n2: second integer
* @r: buffer
* @size_r: buffer size
*
* Return: r
* 0 if buffer size not enogh
*/

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int size1 = 0, size2 = 0, add = 0, rem = 0, aux = 0, i = 0, j = 0;

	while (n1[size1] != 0)
		size1++;
	while (n2[size2] != 0)
		size2++;
	if ((size1) + 2 > size_r || (size2 + 2) > size_r)
		return (0);
	size1--;
	size2--;
	rem = 0, i = 0;
	while (size1 >= 0 || size2 >= 0)
	{
		add = 0;
		if (size1 >= 0)
			add += n1[size1--] - '0';
		if (size2 >= 0)
			add += n2[size2--] - '0';
		add = add + rem;
		if (add > 9)
		{
			add = add - 10;
			rem = 1;
		}
		else
			rem = 0;
		r[i++] = (add + '0');
	}
	if (rem == 1)
		r[i++] = 1 + '0';
	for (j = 0; j < i / 2; j++)
	{
		aux = r[j];
		r[j] = r[i - 1 - j];
		r[i - 1 - j] = aux;
	}
	r[i] = '\0';
	return (r);
}
