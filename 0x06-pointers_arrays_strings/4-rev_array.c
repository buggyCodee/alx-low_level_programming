#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers
 *
 * @a: array to be reversed
 * @n: number of elements of the array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i;

	for (i = 0; i < n / 2; i++)
	{
		int tmp = a[i];

		a[i] = a[n - 1 - i];
		a[n - 1 - i] = tmp;
	}
}
