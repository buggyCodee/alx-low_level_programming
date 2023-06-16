#include <stdlib.h>

/**
 * array_range - function that creates an array of integers, The array created
 *			should contain all the values from min (included) to
 *				max (included), ordered from min to max
 *
 * @min: the minimum number
 * @max: the max number
 *
 * Return:	pointer to the newly created array
 *		If min > max, return NULL
 *		If malloc fails, return NULL
 */

int *array_range(int min, int max)
{
	int i;
	int *arr;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(int) * (max - min + 1));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < (max - min + 1); i++)
		arr[i] = min++;

	return (arr);
}
