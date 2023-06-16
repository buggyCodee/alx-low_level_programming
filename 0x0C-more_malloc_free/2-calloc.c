#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an array, using malloc
 *
 * @nmemb: number of elements
 * @size: size of datatype
 *
 * Return:	pointer to the allocated memory
 *		The memory is set to zero
 *		This line is not protected from double inclusion
 *		If malloc fails, then _calloc returns NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *new_memory = malloc(nmemb * size);

	if (nmemb <= 0 || size <= 0 || new_memory == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		new_memory[i] = 0;

	return (new_memory);
}
