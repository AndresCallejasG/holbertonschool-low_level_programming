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
	int size1 = 0, size2 = 0, add = 0, rem = 0, aux = 0;
	int flag1 = 1, flag2 = 1, i = 0, j = 0;

	while ((flag1 || flag2))
	{
		if (n1[i] == '\0')
		{
			size1 = i;
			flag1 = 0;
		}
		if (n2[i] == '\0')
		{
			size2 = i;
			flag2 = 0;
		}
		if (i + 2 > size_r)
			return (0);
		i++;
	}
	size1--;
	size2--;
	rem = 0;
	i = 0;
	while (size1 >= 0 || size2 >= 0)
	{
		add = 0;
		if (size1 >= 0)
		{
			add += n1[size1] - '0';
			size1--;
		}
		if (size2 >= 0)
		{
			add += n2[size2] - '0';
			size2--;
		}
		add = add + rem;
		if (add > 9)
		{
			add = add - 10;
			rem = 1;
		}
		else
			rem = 0;

		r[i] = (add + '0');
		i++;
	}
	if (rem == 1)
	{
		r[i] = 1 + '0';
		i++;
	}
	for (j = 0; j < i / 2; j++)
	{
		aux = r[j];
		r[j] = r[i - 1 - j];
		r[i - 1 - j] = aux;
	}
	r[i] = '\0';
	return (r);
}
