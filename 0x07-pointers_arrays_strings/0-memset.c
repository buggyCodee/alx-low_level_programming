#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 *
 * @s: the memory area to be filled
 * @n: number of bytes
 * @b: the constant
 *
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	s[n] = '\0';

	while (n--)
		s[n] = b;

	return (s);
}
