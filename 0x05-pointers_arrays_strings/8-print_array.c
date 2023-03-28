#include "main.h"

/**
 * print_array - function that prints n elements of an array of integers,
 *			followed by a new line
 *
 * @a: the array to be print its elements
 * @n: number of elements of the array to be printed
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n - 1; i++)
		printf("%d, ", a[i]);

	printf("%d\n", a[i]);
}
