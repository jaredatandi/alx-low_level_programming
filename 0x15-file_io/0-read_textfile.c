#include "main.h"

/**
 * read_textfile - reads a test file and prints it to the POSIX
 * std output
 * @filename: fd
 * @letters: number of letters it should read and print
 *
 * Return: short size_t actual number of letters it could read
 * and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file;
	size_t count_char = 0;
	char ch;

	file = fopen(filename, "r");

	if (file == NULL)
		return (0);
	do {
		ch = fgetc(file);
		if (ch == EOF)
			break;
		count_char += _putchar(ch);
	} while (count_char < letters);

	fclose(file);

	return (count_char);
}
