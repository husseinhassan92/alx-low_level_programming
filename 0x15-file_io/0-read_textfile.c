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
	char *b;
	ssize_t open, read, write;

	if (filename == NULL)
		return (0);
	b = malloc(sizeof(char) * letters);
	if (b == NULL)
		return (0);

	open = open(filename, O_RDONLY);
	read = read(open, b, letters);
	write = write(STDOUT_FILENO, b, read);

	if (open == -1 || read == -1 || write == -1 || write != read)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(open);
	return (write);
}
