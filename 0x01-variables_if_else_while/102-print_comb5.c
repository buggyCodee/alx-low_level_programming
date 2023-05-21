#include <stdio.h>

/**
 * main - program prints all possible combinations of two two-digit numbers
 *
 * Return: Always 0
 */

int main(void)
{
	int digit_one, digit_two, new_digit_one, new_digit_two;

	digit_one = digit_two = '0';

	while (digit_one <= '9')
	{
		digit_two = '0';
		while (digit_two < '9')
		{
			new_digit_one = digit_one;
			while (new_digit_one <= '9')
			{
				new_digit_two = digit_two + 1;
				while (new_digit_two <= '9')
				{
					putchar(digit_one);
					putchar(digit_two);
					putchar(' ');
					putchar(new_digit_one);
					putchar(new_digit_two++);
					if (digit_one == '9' && digit_two == '8'
					    && new_digit_one == '9'
					    && new_digit_two == '9' + 1)
						continue;
					putchar(',');
					putchar(' ');
				}
				new_digit_one++;
			}
			digit_two++;
		}
		digit_one++;
	}
	putchar('\n');

	return (0);
}
