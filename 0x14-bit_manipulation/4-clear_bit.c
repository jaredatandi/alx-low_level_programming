#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: the number
 * @index: desired index
 * Return: 1 if successful, -1 if error occured
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int reset;

	if (index > sizeof(unsigned long int) * 8 - 1)
		return (-1);

	reset = ~(1 << index);
	*n = *n & reset;
	return (1);
}
