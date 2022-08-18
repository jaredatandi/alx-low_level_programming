#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @index: the desired index to set bit to 1 starting from 0
 * @n: pointer to the number
 * Return: 1 if it worked, -1 if an error occured
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int res;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	res = 1 << index;
	*n = *n | res;
	return (1);
}
