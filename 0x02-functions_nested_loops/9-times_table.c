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
		_putchar('0');

		int b;

		b = 0;

		while (b < 10)
		{
			_putchar(',');
			_putchar(' ');

			int c = 0;

			c = a * b;

			if (c <= 9)
				_putchar(' ');
			else
				_putchar((c / 10) + '0');
			_putchar((c % 10) + '0');
			b++;
		}
		a++;
	}
}
