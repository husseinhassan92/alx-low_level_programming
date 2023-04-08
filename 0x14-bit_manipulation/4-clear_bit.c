#include "main.h"
/**
 * clear_bit - clear bit to 0 at given index
 * @n: number
 * @index: index within binary number
 * Return: 1 if success, or -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int max;

	max = (sizeof(unsigned long int) * 8);

	if (index > max)
		return (-1);
	*n &= ~(1 << index);

	return (1);
}
