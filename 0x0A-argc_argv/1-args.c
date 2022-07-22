#include "main.h"

/**
 * main - prints the number of arguments passed
 * @argc: counts the arguments to main
 * @argv: pointer to array of pointers
 * Return: 0 if success 
 */

int main(int argc, __attribute__((unused))char *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
