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
	unsigned int num = n;

	if (num < 0)
	{
		num = -num;
		_putchar('-');
	}

	if (num / 10 > 0)
		print_number(num / 10);

	_putchar('0' + (num % 10));
}
