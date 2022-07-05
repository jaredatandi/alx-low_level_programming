#include "main.h"

/**
 * print_alphabet - prints all the
 * lowercase alphabets
 * Return: void
 */
void print_alphabet(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		_putchar('a');
		a++;
	}
	_putchar('\n');
}
