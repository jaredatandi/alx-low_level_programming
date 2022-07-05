#include "main.h"

/**
 * times_table - prints multiplication table
 * for 9
 * Return: void
 */
void times_table(void)
{
	int number, a, b;

	for (number = 0; number <= 9; number++)
	{
		_putchar('0');

		for (a = 1; a <= 9; a++)
		{
			_putchar(',');
			_putchar(' ');

			b = number * a;

			if (b <= 9)
				_putchar(' ');
			else
				_putchar((b / 10) + '0');
			_putchar((b % 10) + '0');
		}
		_putchar('\n');
	}
}
