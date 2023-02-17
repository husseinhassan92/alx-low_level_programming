#include <stdio.h>
/**
 *main - print 0123456789
 *Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		printf("%i", n);
	}
	putchar('\n');
	return (0);
}
