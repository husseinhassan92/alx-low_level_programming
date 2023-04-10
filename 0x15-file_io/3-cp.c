#include "main.h"
/**
 * _close - prints error messages and exits with exit value
 * @error: num is either exit value or file descriptor
 * @s: str is a name, either of the two filenames
 * @fd: file descriptor
 * Return: 0 on success
 **/
int _close(int error, char *s, int fd)
{
	switch (error)
	{
	case 97:
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(error);
	case 98:
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", s);
		exit(error);
	case 99:
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", s);
		exit(error);
	case 100:
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(error);
	default:
		return (0);
	}
}
/**
 * main - copies one file to another
 * @argc: should be 3 (./a.out copyfromfile copytofile)
 * @argv: first is file to copy from (fd_1), second is file to copy to (fd_2)
 * Return: 0 (success), 97-100 (exit value errors)
 */
int main(int argc, char *argv[])
{
	int fd_1, fd_2, r, w;
	char *buffer[1024];

	if (argc != 3)
		_close(97, NULL, 0);

	fd_2 = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (fd_2 == -1)
		_close(99, argv[2], 0);

	fd_1 = open(argv[1], O_RDONLY);
	if (fd_1 == -1)
		_close(98, argv[1], 0);

	while ((r = read(fd_1, buffer, 1024)) != 0)
	{
		if (r == -1)
			_close(98, argv[1], 0);

		w = write(fd_2, buffer, r);
		if (w == -1)
			_close(99, argv[2], 0);
	}

	close(fd_2) == -1 ? (_close(100, NULL, fd_2)) : close(fd_2);
	close(fd_1) == -1 ? (_close(100, NULL, fd_1)) : close(fd_1);
	return (0);
}
