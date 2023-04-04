#include "main.h"

/**
 * _memcpy - function that copies memory area
 *
 * @dest: memory area that copied to
 * @src: bytes from memory area to be copied to dest
 * @n: number of bytes to be copied
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
