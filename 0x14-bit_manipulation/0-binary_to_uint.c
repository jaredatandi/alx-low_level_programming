#include "main.h"
#include <stddef.h>
#include <stdio.h>

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: a string of 0s and 1s
 *
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;
	int i;

	if (!b)
		return (0);
	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		decimal = 2 * decimal + (b[i] - '0');
	}

	return (decimal);
}
/**
 * power - calculates base raised to any power
 * @num: power factor
 * @base: the base number
 * Return: the 2 power num
 */

unsigned int power(unsigned int base, unsigned int num)
{
	unsigned int result = 1;

	if (num == 0)
		return (result);

	for (num = num; num > 0; num--)
		result = result * base;
	return (result);
}
