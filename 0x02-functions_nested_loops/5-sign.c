#include "main.h"

/**
 * print_sign - prints the sign of a
 * digit
 * @n: the inputted digit
 * Return: 0 if 0, -1 if negative
 * and 1 if positive
 */
int print_sign(int n)
{
	if (n == 0)
	{
		return (0);
	}
	if (n > 0)
	{
		return (1);
	}
	return (-1);
}
