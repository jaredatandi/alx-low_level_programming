#include "main.h"

/**
 * print_rev - write a string in reverse
 * @str: inputted char
 */
void print_rev(char *str)
{
	int len, i;

	len = strlen(str);

	for (i = len - 1; i >= 0; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');

}
