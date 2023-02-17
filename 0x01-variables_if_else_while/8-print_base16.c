#include <stdio.h>
/**
 *main - prints hexadecimal base 0123456789abcdef, using putchar
 *Return: Always 0 (Success)
 */
int main(void)
{
	char n = '0';

	char x = 'a';

	while (n <= '9') /*print 0-9*/
	{
		putchar(n);
		n++;
	}
	while (x <= 'f') /*print a-f to finish hexbase*/
	{
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}
