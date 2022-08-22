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
	int err;

	if (!filename)
		return (0);

	file = fopen(filename, "r");

	if (file == NULL)
		return (0);

	do {
		ch = fgetc(file);
		if (ch == EOF)
			break;
		err = write(STDOUT_FILENO, &ch, 1);
		if (err < 1)
			return (0);
		count_char++;

	} while (count_char < letters);

	fclose(file);

	return (count_char);
}
