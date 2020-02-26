#include "holberton.h"
int is_prime(int n, int i);
/**
 * is_prime_number - computes if the input integer is a prime number.
 *
 * @n: number
 *
 * Return: 1 if it's prime
 * otherwise 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime(n, n - 1));
}

/**
 * is_prime - computes if the input integer is a prime number.
 *
 * @n: number
 * @i: counter
 *
 * Return: 1 if it's prime
 * otherwise 0
 */

int is_prime(int n, int i)
{
	if (n == 2)
		return (1);
	if (i == 1)
		return (1);
	if (n % i == 0)
		return (0);
	else
		return (is_prime(n, i - 1));
}
