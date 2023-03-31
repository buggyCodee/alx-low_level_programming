#include "main.h"

/**
 * rot13 - function that encodes a string using rot13
 *
 * @str: input string that want to be encoded
 *
 * Return: a pointer to the new encoded string
 */
char *rot13(char *str)
{
	int size = 0;
	int pos;

	while (str[size] != '\0')
	{
		if ('a' <= str[size] && str[size] <= 'z')
		{
			pos = (((str[size] - 'a') + 13) % 26);
			str[size] = (char)('a' + pos);
		}
		else if ('A' <= str[size] && str[size] <= 'A')
		{
			pos = (((str[size] - 'A') + 13) % 26);
			str[size] = (char)('A' + pos);
		}

		size++;
	}

	return (str);
}
