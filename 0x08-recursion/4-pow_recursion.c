#include "holberton.h"

/**
 * _pow_recursion - value of x raised to the power of y.
 *
 * @x: base
 * @y: power
 *
 * Return: x power y
 * if y < 0 ----> -1
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
