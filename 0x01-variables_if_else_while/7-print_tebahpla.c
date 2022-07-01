#include <stdio.h>

/**
 * main - prints reverse alphabets
 * Return: 0 (success)
 */
int main(void)
{
	char n;

	for (n = 'z'; n >= 'a'; n--)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
