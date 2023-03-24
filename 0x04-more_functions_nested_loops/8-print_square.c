#include "main.h"

/**
 * print_square - prints a square, followed by a new line
 *
 * @size: size of the square
 *
 * Return: void
 */

void print_square(int size)
{
	int row, col;

	for (row = 0; row < size; row++)
	{
		for (col = 0; col < size; col++)
			_putchar('#');

		_putchar('\n');
	}

	if (size == 0)
		_putchar('\n');
}
