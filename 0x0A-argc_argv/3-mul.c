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
	int a, b;

	a = atoi(argv[1]);
	b = atoi(argv[2]);

	if (argc < 3  || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", (a * b));

	return (0);
}
