#include <main.h>
/**
 * print_diagonal - print character "\" n times
 * @n: number of characters to draw
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (j == i)
				{
					_putchar('\\');
				}
				else
				{
					_putchar (' ');
				}
			}
			_putchar ('\n');
		}
	}
	else
		_putchar ('\n');
}

