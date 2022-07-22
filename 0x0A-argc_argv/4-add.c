#include "main.h"

/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: pointer to argument arrays
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int i, j, num, res, k;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > '9' || argv[i][j] < '0')
			{
				printf("Error\n");

				return (1);
			}
		}
	}

	res = 0;

	for (k = 0; k < argc; k++)
	{
		num = atoi(argv[k]);

		if (num >= 0)
		{
			res += num;
		}
	}
	printf("%d\n", res);

	return (0);
}
