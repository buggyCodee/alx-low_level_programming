#include "main.h"

/**
 * print_number - function that prints an integer
 *
 * @n: number to be printed
 *
 * Return: void
 */

void print_number(int n)
{
	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}

	if (n / 10 > 0)
		print_number(n/10);

	_putchar('0' + (n % 10));
}
