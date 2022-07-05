#include "main.h"

/**
 * times_table - prints multiplication table
 * for 9
 * Return: void
 */
void times_table(void)
{
	int a = 0;

	while (a < 9)
	{
		int b = 0;

		while (b < 10)
		{
			_putchar(9 + '0');
			_putchar('X');
			_putchar(b + '0');
			_putchar('\n');
			b++;
		}
		a++;
	}
}
