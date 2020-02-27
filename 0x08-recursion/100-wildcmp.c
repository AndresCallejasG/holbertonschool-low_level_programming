#include "holberton.h"

/**
 * wildcmp - compares two strings.
 *
 * @s1: string 1
 * @s2: string 2
 *
 * Return: 1 if the strings can be considered identical
 * otherwise return 0.
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == 0 && *s2 == 0)
	{
		return (1);
	}
	if (*s2 == 42)
	{
		if (*(s2 + 1) != 0 && *s1 == 0)
			return (0);
		else
			return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
	}
	if (*s2 == *s1)
		return (wildcmp(s1 + 1, s2 + 1));
	return (0);
}
