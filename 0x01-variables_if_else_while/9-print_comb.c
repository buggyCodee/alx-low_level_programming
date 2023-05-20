#include <stdio.h>

/**
 * main - program that prints all possible combinations of single-digit numbers
 *
 * Return: Always 0
 */

int main(void)
{
	int start = '0';

	while (start <= '9')
	{
		putchar(start++);
		if (start <= '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
