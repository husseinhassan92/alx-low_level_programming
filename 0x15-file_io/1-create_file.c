#include "main.h"
/**
 * create_file - creates file with permissions rw------- and writes content in
 * if file already exists, don't change permissions and just truncate it
 * @filename: name to give to new file
 * @text_content: writes this content into file
 * Return: 1 on success, -1 on error
 */
int create_file(const char *filename, char *text_content)
{
	int open, write, str_len;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (str_len = 0; text_content[str_len];)
			str_len++;
	}

	open = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	write = write(open, text_content, str_len);

	if (open == -1 || write == -1)
		return (-1);

	close(open);

	return (1);
}
