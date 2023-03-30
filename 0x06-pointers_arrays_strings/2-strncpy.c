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
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	while (i < n)
		dest[i++] = '\0';

	return (dest);
}
