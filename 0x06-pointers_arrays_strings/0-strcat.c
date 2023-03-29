#include "main.h"

/**
 * _strcat - function that concatenates two strings
 *
 * @dest: the string that adds src string to its contnet
 * @src: the string to be added
 *
 * Return: pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int dest_size = 0;
	int src_size = 0;

	while (dest[dest_size] != '\0')
		dest_size++;

	while (src[src_size] != '\0')
	{
		dest[dest_size] = src[src_size];
		dest_size++;
		src_size++;
	}

	dest[dest_size] = '\0';

	return (dest);
}
