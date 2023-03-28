#include "main.h"

/**
 * print_rev - function that prints a string, in reverse,
 *		followed by a new line
 *
 * @s: string to be printed reversely
 *
 * Return: void
 */

void print_rev(char *s)
{
	int size = 0;

	while (s[size] != '\0')
		size++;

	while (size != 0)
		_putchar(s[--size]);

	_putchar('\n');
}
