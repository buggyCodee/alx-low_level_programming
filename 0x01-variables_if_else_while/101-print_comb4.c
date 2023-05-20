#include <stdio.h>

/**
 * main - program that prints all possible different combinations of three digits
 *		012, 120, 102, 021, 201, 210 are considered the same combination
 *			of the three digits 0, 1 and 2
 *
 * Return: Always 0
 */

int main(void)
{
	int first_digit;
	int second_digit;
	int third_digit;

	first_digit = '0';

	while (first_digit < '8')
	{
		second_digit = first_digit + 1;

		while (second_digit < '9')
		{
			third_digit = second_digit + 1;
			while (third_digit <= '9')
			{
				putchar(first_digit);
				putchar(second_digit);
				putchar(third_digit++);

				if (first_digit == '7' && second_digit == '8' &&
				    third_digit == '9' + 1)
					continue;
				putchar(',');
				putchar(' ');
			}
			second_digit++;
		}

		first_digit++;
	}

	putchar('\n');

	return (0);
}
