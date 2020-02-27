#include "holberton.h"

int len(char *s);
int pal(char *s, int size, int i);

/**
 * is_palindrome - 1 if a string is a palindrome and 0 if not.
 *
 * @s: string
 *
 * Return: 1 if a string is a palindrome and
 * 0 if not.
 */

int is_palindrome(char *s)
{
	return (pal(s, len(s), 0));
}

/**
 * pal - 1 if a string is a palindrome and 0 if not
 *
 * @s: string
 * @size: lenght
 * @i: counter
 *
 * Return: 1 if a string is a palindrome and
 *  0 if not.
 */

int pal(char *s, int size, int i)
{
	if (i > size / 2)
		return (1);
	if (s[i] == s[size - 1 - i])
		return (pal(s, size, i + 1));
	else
		return (0);
}

/**
 * len - returns the length of a string.
 *
 * @s: string
 *
 * Return: lenght
 */

int len(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + len(s + 1));
}
