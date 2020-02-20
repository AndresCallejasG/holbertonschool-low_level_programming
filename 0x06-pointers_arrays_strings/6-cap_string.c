#include "holberton.h"

/**
 * cap_string - capitalizes all words of a string.
 *
 * @s: string
 *
 * Return: string in uppercase
 */

char *cap_string(char *s)
{
	int i, flag;
	char c;

	c = ' ';
	i = 0;
	flag = 1;

	while (s[i] != '\0')
	{
		c = s[i];

		if (flag && (s[i] >= 'a' && s[i] <= 'z'))
		{
			s[i] = s[i] - 32;
			flag = 0;
		}

		if (c == ' ' || c == 9 || c == 10 ||
		 c == ',' || c == ';' || c == '.' || c == '!' || c == '?' || c == '"' ||
		 c == '(' || c == ')' || c == '{' || c == '}')
		{
			flag = 1;
		}
		else
			flag = 0;
		i++;
	}
	return (s);
}
