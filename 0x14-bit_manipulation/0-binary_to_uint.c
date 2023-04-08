#include <stdio.h>
#include "main.h"
/**
 * binary_to_uint - convert binary to unsigned int
 * @b: binary
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	int len = 0, n;
	unsigned int num = 0;

	if (b == NULL)
		return (0);

	while (b[len] != '\0')
		len++;
	len -= 1;

	n = 0;
	while (b[n])
	{
		if ((b[n] != '0') && (b[n] != '1'))
			return (0);

		if (b[n] == '1')
			num += (1 * (1 << len));
		n++;
		len--;
	}

	return (num);
}
