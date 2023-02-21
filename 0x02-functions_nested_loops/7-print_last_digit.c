#include "main.h"
/**
 * print_last_digit - print last digit of integer
 * @n: integer argument
 * Return: last digit of number
 */
int print_last_digit(int n)
{
	int i == n % 10;

	if (i < 0)
	{
		i *= -1;
	}
	_putchar('0' + i);
	return (i);
}
