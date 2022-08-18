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
	int res;

	if (index > 63)
		return (-1);

	res = ((n >> index) & 1);
	return (res);

}
