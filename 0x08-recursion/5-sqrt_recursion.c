#include "holberton.h"

int _sqrt_aux(int x, int i);
/**
 * _sqrt_recursion - natural square root of a number.
 *
 * @n: number
 *
 * Return: natural root
 * if it doesn't have ----> -1
 */
int _sqrt_recursion(int n)
{
	return (_sqrt_aux(n, 1));
}

/**
 * _sqrt_aux - help to calculate square root of a number.
 *
 * @x: number
 * @i: counter
 *
 * Return: natural root
 * if it doesn't have ----> -1
 */

int _sqrt_aux(int x, int i)
{

	if (i > x)
		return (-1);
	if (i * i == x)
		return (i);
	else
		return (_sqrt_aux(x, i + 1));

}
