#include "holberton.h"
/**
* _putchar - cmputes the absolute value of an integer
* @n: The number to use
*
* Return: absolute value of n.
*/

int _abs(int n)
{
	if (n < 0)
		return ((n * (-1)));
	else
		return (n);
}	
