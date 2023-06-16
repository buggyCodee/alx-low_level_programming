#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory using malloc
 *
 * @b: bytes to be allocated
 *
 * Return:	pointer to the allocated memory
 *		if malloc fails, the malloc_checked function should cause normal
 *			process termination with a status value of (98)
 */

void *malloc_checked(unsigned int b)
{
	void *new_memory = malloc(b);

	if (new_memory == NULL)
		exit(98);

	return (new_memory);
}
