#include <stdio.h>

/**
 * main - prints a combination
 * Return: 0 (success)
 */
int main(void)
{
	int a, b;

	for (a = 48; b <= 57; b++)
	{
		for (b = 49; b <= 57; b++)
		{

			if (b > a)
			{
				putchar(a);
				putchar(b);
				if (a != 56 || b != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
