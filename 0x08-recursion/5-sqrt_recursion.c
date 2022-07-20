#include "main.h"

int _sqrt(int m, int y);

/**
 * _sqrt_recursion - returns the square root of a number
 * @n: the integer
 * Return: square root of n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt(n, 0));
}

/**
 * _sqrt - returns square root of a natural number
 * @m: the base
 * @y: the square iterator
 * Return: the square root
 */

int _sqrt(int m, int y)
{
	if (y * y > m)
		return (-1);
	if (y * y == m)
		return (y);
	return (_sqrt(m, y + 1));
}

