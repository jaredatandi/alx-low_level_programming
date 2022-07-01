#include <stdio.h>

/**
 * main - prints both lowercase
 * and uppercase alphabets
 * Return: 0 (success)
 */
int main(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	for (letter = 'Z'; letter <= 'Z'; letter++)
		putchar(letter);
	putchar('\n');
	return (0);
}
