#include <main.h>
/**
 * print_line - print the character "_" n times to draw a line
 * @n: number of characters to draw
 */
void print_line(int n)
{
	int i;

	for (i = n; i > 0, i--)
	{
		_putchar ('-');
	}
	_putchar ('\n');
}
