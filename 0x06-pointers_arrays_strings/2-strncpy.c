#include "main.h"

/**
 * _strncpy - function that copies a string
 *
 * @dest: string where the content to be copied
 * @src: string to be copied
 * @n: Maximum number of characters to be copied from source
 *
 * Return: pointer to the resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int dest_size = 0;
	int src_size = 0;

	while (dest[dest_size] != '\0')
		dest_size++;

	while (src_size < n)
	{
		dest[src_size] = src[src_size];
		src_size++;
	}

	if (n > dest_size)
		dest[src_size] = '\0';

	return (dest);
}
