#include <unistd.h>
#include "main.h"

/**
 * _putchar - displays a character
 * @c: inputted character
 * Return: 1 success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
