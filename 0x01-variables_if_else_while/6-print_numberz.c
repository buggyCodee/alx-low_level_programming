#include <stdio.h>

/**
 * main - program that prints all single digit numbers of base 10
 *		starting from 0, followed by a new line.
 *
 * Return: Always 0
 */

int main(void)
{
	char start = '0';

	while (start <= '9')
		putchar(start++);
	putchar('\n');

	return (0);
}
