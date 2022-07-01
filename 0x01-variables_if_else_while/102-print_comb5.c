#include <stdio.h>

/**
 * main - prints combination of two digits
 * Return: 0 (Success)
 */
int main(void)
{
	int j, k;

	for (j = 0; j < 100; k++)
	{
		for (k = 0; k < 100; k++)
		{
			if (j < k)
			{
				putchar((k / 10) + 48);
				putchar((k % 10) + 48);
				putchar(' ');
				putchar((j / 10) + 48);
				putchar((j % 10) + 48);
				if (j != 98 || k != 99)
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

