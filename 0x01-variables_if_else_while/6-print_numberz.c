#include <stdio.h>

/**
 * main - prints single digit numbers
 * using putchar
 * Return: 0 (success)
 */
int main(void)
{
	int a;

	for (a = 48; a < 58; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
