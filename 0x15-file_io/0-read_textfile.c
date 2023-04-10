#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - read a certain size and prints to std output
 * @filename: file to read from
 * @letters: size to read
 * Return: actual size read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd; /* file descriptor */
	ssize_t r, w;
	char *buffer;

	if (filename == NULL)
		return (0);

	/* open */
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	/* malloc buffer */
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	/* read */
	r = read(fd, buffer, letters);
	if (r == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	/* write */
	w = write(STDOUT_FILENO, buffer, r);
	if (w == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	close(fd);
	return (r);

}
