#include "main.h"

/**
 * count_digits - function that count the number of digits to any given integer
 *
 * @num: number to calculate its digit
 *
 * Return: digits of the number
 */

int count_digits(int num)
{
	int digits = 0;

	while (num != 0)
	{
		num /= 10;
		digits++;
	}

	if (digits == 0)
		digits++;

	return (digits);
}

/**
 * power - calcualte the power of the given input
 *
 * @base: base
 * @exp: exponent
 *
 * Return: base ^ exponent
 */

int power(int base, int exp)
{
	int res = 1;

	while (exp--)
		res *= base;

	return (res);
}

/**
 * print_number - function that prints an integer
 *
 * @n: number to be printed
 *
 * Return: void
 */

void print_number(int n)
{
	int digits = count_digits(n);

	while (digits--)
		_putchar('0' + (n / power(10, digits)) % 10);
}
