#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 *
 * @size: length of the triangle
 *
 * Return: void
 */

void print_triangle(int size)
{
	int rows, cols;

	if (size <= 0)
		_putchar('\n');
	else
		for (rows = 1; rows <= size; rows++)
		{
			for (cols = 1; cols <= size; cols++)
				if (rows + cols <= size)
					_putchar(' ');
				else
					_putchar('#');
			_putchar('\n';
		}

}
