#include <stdio.h>

/**
 * main - program that prints all possible different combinations of two digits
 *		01 and 10 are considered the same combination
 *			of the two digits 0 and 1
 *
 * Return: Always 0
 */

int main(void)
{
	int first_digit, second_digit;

	first_digit = '0';

	while (first_digit < '9')
	{
		second_digit = first_digit + 1;
		while (second_digit <= '9')
		{
			putchar(first_digit);
			putchar(second_digit++);

			if (first_digit == '8' && second_digit == '9' + 1)
				continue;
			putchar(',');
			putchar(' ');
		}
		first_digit++;
	}

	putchar('\n');

	return (0);
}
