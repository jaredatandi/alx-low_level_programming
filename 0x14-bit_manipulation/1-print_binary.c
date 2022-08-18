#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: the decimal number
 */

void print_binary(unsigned long int n)
{
	int i, flag = 0;
	unsigned long int res;

	for (i = 63 ; i >= 0; i--)
	{
		res = n >> i;
		if (res & 1)
		{
			_putchar('1');
			flag++;
		}
		else if (flag)
			_putchar('0');
	}
	if (!flag)
		_putchar('0');
}
