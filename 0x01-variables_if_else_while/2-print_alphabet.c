#include <stdio.h>

/**
 * main - program that prints the alphabet in lowercase,
 *		followed by a new line.
 *
 * Return: Always 0
 */

int main(void)
{
	char start = 'a';

	while (start <= 'z')
		putchar(start++);

	putchar('\n');

	return (0);
}
