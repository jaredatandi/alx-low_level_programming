#include "main.h"

/**
 * main - prints the result of multiplying
 * two numbers
 * @argc: argument count
 * @argv: pointer to array of argument
 * Return: 0 (success)
 */
int main(int argc, char **argv)
{
	int a, b, res;

	if (argc == 1 || argc < 3 || argc > 3)
	{
		printf("Error\n");

		return (1);
	}


	a = atoi(argv[1]);
	b = atoi(argv[2]);

	res = a * b;

	printf("%d\n", res);

	return (0);
}
