#include "main.h"

/**
 * append_text_to_file - appends a text at the end of a file
 * @filename: the name of the fil
 * @text_content: NULL terminated string to append
 *
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, lenr = 0;
	ssize_t buff = 0;

	while (text_content[buff])
		buff++;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
	{
		return (-1);
	}
	if (text_content)
		lenr = write(fd, text_content, buff);


	if (lenr == -1)
		return (-1);
	close(fd);

	return (1);
}
