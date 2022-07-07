#include "main.h"

/**
 * print_square - prints a square
 * @size: the size of the square
 * Return: void
 */
void print_square(int size)
{
	if (size <= 0)
		_putchar('\n');
	else
	{
		int a = 0, b;

		while (a < size)
		{
			b = 0;

			while (b < size)
			{
				_putchar('#');
				b++;
			}
			_putchar('\n');
			a++;
		}
	}
}
