#include "holberton.h"

/**
* _atoi - convert a string to an integer
* @s: string
*
* Return: int
*/

int _atoi(char *s)
{
	int i, j;
	int neg, mult, num, first;

	i = 0;
	j = 0;
	neg = 0;
	mult = 1;
	num = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			neg++;
		else if (s[i] >= '0' && s[i] <= '9')
		{
			first = i;
			while (s[i + 1] >= '0' && s[i + 1] <= '9')
				i++;
			for (j = i; j >= first; j--)
			{
				num += (s[j] - '0') * mult;
				mult *= 10;
			}
			if ((neg % 2) == 1)
				num = num * -1;
			return (num);
		}
		i++;
	}

	return (num);
}
