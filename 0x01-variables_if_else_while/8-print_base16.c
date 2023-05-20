#include <stdio.h>

/**
 * main - program that prints all the numbers of base 16 in lowercase,
 *		followed by a new line.
 *
 * Return: Always 0
 */

int main(void)
{
	int start = '0';

	while (start <= '9')
		putchar(start++);

	start = 'a';

	while (start <= 'f')
		putchar(start++);
	putchar('\n');

	return (0);
}
