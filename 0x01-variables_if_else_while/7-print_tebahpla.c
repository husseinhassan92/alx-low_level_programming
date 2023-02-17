#include <stdio.h>
/**
 *main - print alphabet reversed using putchar
 *Return: Always 0 (Success)
 */
int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
