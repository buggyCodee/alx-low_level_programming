#include "main.h"

/**
 * rev_string - function that reverses a string
 *
 * @s: string that need to be reversed
 *
 * Return: void
 */

void rev_string(char *s)
{
	int i;
	int size = 0;

	while (s[size] != '\0')
		size++;

	for (i = 0; i < size / 2; i++)
	{
		char tmp = s[i];

		s[i] = s[size - 1 - i];
		s[size - 1 - i] = tmp;
	}
}
