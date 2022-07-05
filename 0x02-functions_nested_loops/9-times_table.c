#include "main.h"

/**
 * time_table - prints multiplication table
 * for 9
 * Return: void
 */
void time_table(void)
{
	int a = 9;

	while (a == 9)
	{
		int b = 0;

		while (b < 10)
		{
			_putchar(a + '0');
			_putchar('X');
			_putchar(b + '0');
			_putchar('\n');
		}
	}
}
