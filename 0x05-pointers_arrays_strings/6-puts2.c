#include "main.h"

/**
 * puts2 - print to the display
 * @str: string
 * Return: voind
 */
void puts2(char *str)
{
	int len, i;

	len = strlen(str);
	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
