#include <stdio.h>

/**
 * array_iterator - function that executes a function given as
 *			a parameter on each element of an array
 *
 * @array: the array to be execute actions on its elements
 * @size: the array size
 * @action: action to be executed on the elements
 *
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && action != NULL)
		for (i = 0; i < size; i++)
			(*action)(array[i]);
}
