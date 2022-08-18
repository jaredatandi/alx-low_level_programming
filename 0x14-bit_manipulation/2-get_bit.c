#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: the bit to return its index
 * @index: the index of the bit starting from 0
 *
 * Return: the value of the bit at index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i;
	int res;

	for (i = 0; i <= n; i++)
	{
		res = ((n >> i) & 1);
		if (i == index)
			return (res);
	}

	return (-1);
}
