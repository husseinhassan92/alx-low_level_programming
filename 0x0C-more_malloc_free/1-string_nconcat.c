#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - concatenate s1 and n bytes of s2; return ptr to string
 * @s1: string 1
 * @s2: string 2
 * @n: n bytes to concat from string 2
 * Return: pointer to concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat_str;
	int len1 = 0, len2 = 0,
	    i = 0, j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (*(s1 + i))
		len1++, i++;
	while (*(s2 + j))
		len2++, j++;
	len2++;
	concat_str = malloc(sizeof(char) * (len1 + len2));
	if (concat_str == NULL)
		return (NULL);
	i = 0, j = 0;
	while (i < len1)
	{
		*(concat_str + i) = *(s1 + i);
		i++;
	}
	while (j < n)
	{
		*(concat_str + i) = *(s2 + j);
		i++, j++;
	}
	return (concat_str);
}
