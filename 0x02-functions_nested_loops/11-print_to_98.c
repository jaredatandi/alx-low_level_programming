#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints natural numbers
 * to 98
 * @n: where the count starts
 * Return: void
 */
void print_to_98(int n)
{
	int number;

	if (n == 98)
	{
		printf("%d ", n);
	}
	if (n > 98 || n < 98)
	{
		for (number = n; number <= 98; number++)
		{
			printf("%d", number);

			if (number != 98)
				printf(", ");
		}
		for (number = n; number >= 98; number--)
		{
			printf("%d", number);

			if (number != 98)
				printf(", ");
		}
		printf("\n");
	}
}
