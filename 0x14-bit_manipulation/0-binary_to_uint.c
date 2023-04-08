#include <stdio.h>
#include "main.h"
/**
 * binary_to_uint - convert binary to unsigned int
 * @b: binary
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	int n, len = 0;
	unsigned int num = 0;

	if (b == NULL)
		return (num);

	while (b[len] != '\0')
		len++;
	len -= 1;
	n = 0;
	while (b[n])
	{
		if ((b[n] != '0') && (b[n] != '1'))
			return (num);
		if (b[n] == '1')
			num += (1 * (1 << len));
		i++;
		len--;
	}
	return (num);
}
