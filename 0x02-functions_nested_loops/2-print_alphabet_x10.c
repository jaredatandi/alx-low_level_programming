#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets
 * from a to z ten times
 * Return: void
 */
void print_alphabet_x10(void)
{
	char le;
	int number = 0;

	while (number < 10)
	{
		le = 'a';
		while (le <= 'z')
		{
			_putchar(le);
			le++;
		}
		number++;
		_putchar('\n');
	}

}
