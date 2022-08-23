#include "main.h"
#include <stdlib.h>

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
	FILE *buff;
	ssize_t w, o, r;

	if (filename == NULL)
		return (0);

	buff = malloc(sizeof(char) * letters);

	if (buff == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, buff, letters);
	w = write(STDOUT_FILENO, buff, r);

	if (o < 0 || r < 0 || w < 0 || w != r)
	{
		free(buff);
		return (0);
	}

	free(buff);
	close(o);

	return (w);
}
