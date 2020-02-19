#include "holberton.h"

/**
* _atoi - convert a string to an integer
* @s: string
*
* Return: num if finds a number
* 0 otherwise
*/

int _atoi(char *s)
{
	int i;
	int neg, num, flag;

	i = 0;
	neg = -1;
	flag = 0;
	num = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			neg *= -1;
		else if (s[i] >= '0' && s[i] <= '9')
		{
			flag = 1;
			num *= 10;
			num -= (s[i] - '0');
		}
		else if (flag)
			break;
		i++;
	}
	num = num * neg;

	return (num);

}
