#include "main.h"

/**
 * _strchr - function that locates a character in a string
 *
 * @s: string to be searched
 * @c: the searched char
 *
 * Return: pointer to the first occurrence of the character c in the string s,
 *		or NULL
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; (s[i] != c) && (s[i] != '\0'); i++);

	if (s[i] == c)
		return (s + i);
	return (NULL);
}
