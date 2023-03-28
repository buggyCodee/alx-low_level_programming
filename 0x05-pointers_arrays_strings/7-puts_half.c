#include "main.h"

/**
 * puts_half - function that prints half of a string, followed by a new line
 *
 * @str: complete string that will be manipulated
 *
 * Return: void
 */

void puts_half(char *str)
{
	int size = 0;
	int middle, i;

	while (str[size] != '\0')
		size++;

	middle = (size / 2);

	for (i = middle; i < size; i++)
		_putchar(str[i]);

	_putchar('\n');
}
