#include "holberton.h"

/**
* _atoi - convert a string to an integer
* @s: string
*
* Return: int
*/

int _atoi(char *s)
{
	int i, j, flag, neg, mult, num;

	i = 0;
	j = 0;
	neg = 0;
	flag = 0;
	mult = 1;
	num = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			neg++;
		if (s[i] >= 0 && s[i] <= 9)
		{
			first = i;
			while (s[i] >= 0 && s[i] <= 9)
				i++;
			mult = 1;
			for (j = i; i >= inicio; i--)
			{
				num = (s[j] - '0') * mult;
				mult *= 10;
			}
			if ((neg % 2) == 1)
				num = num * -1;
			flag = 1;
		}
		if (flag)
			break;
		i++;
	}

	return (num);
}
