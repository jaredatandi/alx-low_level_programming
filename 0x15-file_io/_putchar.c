#include "main.h"

/**
 * _putchar - print a char to std output
 * @c: the char to print
 * Return: 1 if success
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
