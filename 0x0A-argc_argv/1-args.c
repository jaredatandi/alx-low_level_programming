#include "main.h"

/**
 * main - prints the number of arguments passed
 * @argc: counts the arguments to main
 * @argv: pointer to array of pointers
 * Return: the number of arguments
 */

int main(int argc, __attribute__((unused))char *argv[])
{
	printf("%d\n", argc - 1);

	return (argc);
}
