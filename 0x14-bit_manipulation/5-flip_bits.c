#include "main.h"

/**
 * flip_bits - counts the number of bits to flip to get a number from
 * another
 * @n: first number
 * @m: second number
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int check, diff;
	unsigned int i, count = 0;

	check = 1;
	diff = n ^ m;

	for (i = 0; i < (sizeof(unsigned long int) * 8); i++)
	{
		if (check == (diff & check))
			count++;
		check <<= 1;
	}
	return (count);
}
