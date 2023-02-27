#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}
void rev_string(char *s)
{
	int i, j = (_strlen(s) - 1);
	char z;

	while (i < j)
	{
		z = s[i];
		s[i] = s[j];
		s[j] = z;
		i++;
		j--;
	}
}

