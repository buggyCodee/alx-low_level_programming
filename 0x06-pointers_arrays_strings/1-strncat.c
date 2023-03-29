#include "main.h"

/**
 * _strncat - function that concatenates two strings
 *
 * @dest: the main string
 * @src: the string to be appended to dest
 * @n: the number of characters to be concatenated
 *
 * Return: void
 */

char *_strncat(char *dest, char *src, int n)
{
	int size = 0;
	int i = 0;

	while (dest[size] != '\0')
		size++;

	if (n > 0)
		while (src[i] != '\0' && n)
		{
			dest[size + i] = src[i];
			i++;
			n--;
		}

	dest[size + i] = '\0';

	return (dest);
}
