#include "main.h"

/**
 * puts2 - function that prints every other character of a string,
 *		starting with the first character, followed by a new line
 *
 * @str: string to be print its characters
 *
 * Return: void
 */

void puts2(char *str)
{
	int i;
	int size = 0;

	while (str[size] != '\0')
		size++;

	for (i = 0; i < size; i += 2)
		_putchar(str[i]);

	_putchar('\n');
}
