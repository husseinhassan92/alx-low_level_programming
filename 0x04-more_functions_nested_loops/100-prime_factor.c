#include <stdio.h>

/**
 * main - print largest prime factor of 612852475143
 * Return: 0 on success
 */

int main(void)
{
	unsigned long num = 612852475143;
	unsigned long div = 2;

	while (div < num)
	{
		if (num % div == 0)
		{
			num /= div;
			div = 2;
		}
		else
			div++;
	}
	printf("%lu\n", num);
	return (0);
}
