#include <stdlib.h>

/**
 * create_array - function that creates an array of chars,
 *			and initializes it with a specific char
 *
 * @size: size of the array
 * @c: the character to be intialized array with
 *
 * Return:	NULL if size = 0
 *		pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *arr;

	if (size == 0)
		return (NULL);

	arr = malloc(sizeof(char) * size);

	if (arr != NULL)
	{
		unsigned int i;

		for (i = 0; i < size; i++)
			arr[i] = c;

		arr[i] = '\0';
	}

	return (arr);
}
