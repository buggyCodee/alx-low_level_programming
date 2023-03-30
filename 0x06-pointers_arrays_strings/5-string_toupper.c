#include "main.h"

/**
 * string_toupper - function that changes all lowercase
 *			letters of a string to uppercase
 *
 * @str: string to be manipulated
 *
 * Return: pointer to the maipulated string
 */

char *string_toupper(char *str)
{
	int size = 0;

	while (str[size] != '\0')
	{
		if ('a' <= str[size] && str[size] <= 'z')
			str[size] -= ('a' + 'A');
		size++;
	}
}
