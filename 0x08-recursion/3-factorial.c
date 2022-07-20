#include "main.h"

/**
 * factorial - returns the factorial of a number
 * @n: the positive number inputted
 * Return: -1 if n is -ve, otherwise factorial
 */

int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	return (factorial(n - 1) * n);
}
