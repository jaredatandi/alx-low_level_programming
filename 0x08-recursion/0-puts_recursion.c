#include "main.h"

/**
 * _puts_recursion - prints a string
 * @s: a pointer to the string
 * Return: void
 */

void _puts_recursion(char *s)
{
	int i;
	char *ptr;

	i = 0;

	if (s[i] != '\0')
	{
		_putchar(s[i]);
		ptr = &s[i + 1];
		_puts_recursion(ptr);
	}
	else
		_putchar('\n');
}
