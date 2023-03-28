#include "main.h"

/**
 * swap_int - function that swaps the values of two integers
 *
 * @a: pointer to the first int
 * @b: pointer to the seccond int
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
