#include <stdio.h>
/**
 * flip_bits - determine how many bits to flip to get from one num to another
 * @n: number
 * @m: number2
 * Return: how many bits differ
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bit = 0;
	unsigned long int diff = n ^ m;

	while (diff > 0)
	{
		bit += (diff & 1);
		diff >>= 1;
	}
	return (bit);
}
