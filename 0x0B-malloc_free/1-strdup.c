#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: string to duplicate
 * Return: pointer to duplicated string in allocated memory
 */
char *_strdup(char *str)
{
	char *du_str;
	int i = 0;
	int len = 0;

	if (str == 0)
		return (NULL);
	while (*(str + i))
		len++, i++;
	len++;
	du_str = malloc(sizeof(char) * len);
	if (du_str == 0)
		return (NULL);
	while (i < len)
	{
		*(du_str + i) = *(str + i);
		i++;
	}
	return (du_str);
}
