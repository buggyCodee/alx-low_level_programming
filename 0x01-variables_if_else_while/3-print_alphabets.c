#include <stdio.h>

/**
 * main - program that prints the alphabet in lowercase,
 *		and then in uppercase, followed by a new line.
 *
 * Return: Always 0
 */

int main(void)
{
	char start = 'a';

	while (start <= 'z')
		putchar(start++);

	start = 'A';
	while (start <= 'Z')
		putchar(start++);

	putchar('\n');

	return (0);
}
