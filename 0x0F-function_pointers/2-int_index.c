#include <stdio.h>

/**
 * int_index - function that searches for an integer
 *
 * @array: the array elements
 * @size: size is the number of elements in the array array
 * @cmp: pointer to the function to be used to compare values
 *
 * Return:	returns the index of the first element for which
 *			the cmp function does not return 0
 *		If no element matches, return -1
 *		If size <= 0, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array != NULL && cmp != NULL && size > 0)
		for (index = 0; index < size; index++)
			if ((*cmp)(array[index]))
				return (index);

	return (-1);
}
