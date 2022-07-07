#include "main.h"

/**
 * more_numbers - prints 10 times the numbers
 * from 0 to 14 followed by a new line
 * Return: void
 */

void more_numbers(void)
{
	int a = 0, b;

	while (a < 10)
	{
		b = 0;

		while (b < 15)
		{
			if (b >= 10)
			{
				_putchar(b / 10 + '0');
			}
			_putchar(b % 10 + '0');
			b++;
		}
		_putchar('\n');
		a++;
	}
}
