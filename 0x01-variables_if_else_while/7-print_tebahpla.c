#include <stdio.h>

/**
 * main - program that prints the lowercase alphabet in reverse,
 *		followed by a new line
 *
 * Return: Always 0
 */

int main(void)
{
	char start = 'z';

	while (start >= 'a')
		putchar(start--);
	putchar('\n');

	return (0);
}
