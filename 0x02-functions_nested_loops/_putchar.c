#include <unistd.h>

/**
 * _putchar - puts a character to the
 * screen
 * @c: inputted character
 * Return: 1 (success)
 * if not, -1 is returned
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
