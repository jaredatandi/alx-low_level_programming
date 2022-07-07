#include "main.h"

/**
 * print_numbers - prints number 0 - 9
 * followed by a new line
 * Return: void
 */

void print_numbers(void)
{
	int a = 0;

	while (a < 10)
	{
		_putchar(a + '0');
		a++;
	}
	_putchar('\n');
}
