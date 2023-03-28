#include "main.h"

/**
 * _strcpy - function that copies the string pointed to by src,
 *		including the terminating null byte (\0),
 *		to the buffer pointed to by dest
 *
 * @src: source string
 * @dest: distnation string that will be duplicate of src
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;
	int size = 0;

	while (src[size] != '\0')
		size++;

	for (i = 0; i < size; i++)
		dest[i] = src[i];

	dest[i] = '\0';

	return (dest);
}
