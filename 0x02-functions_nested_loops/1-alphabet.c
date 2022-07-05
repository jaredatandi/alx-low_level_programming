#include "main.h"

/**
 * print_alphabet - prints all the
 * lowercase alphabets
 * Return: void
 */
void print_alphabet(void)
{
	char le = 'a';

	while (le <= 'z')
	{
		_putchar(le);
		le++;
	}
	_putchar('\n');
}
int main()
{
	print_alphabet();
	return (0);
}
