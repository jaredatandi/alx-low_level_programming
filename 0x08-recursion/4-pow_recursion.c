#include "main.h"

/**
 * _pow_recursion - returns x raised to y
 * @x: the base
 * @y: the power
 * Return: x raised to y
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	return (_pow_recursion(x, y - 1) * x);
}
