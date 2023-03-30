#include "main.h"

/**
 * leet - function that encodes a string into 1337
 *
 * @str: the string to be encoded
 *
 * Return: pointer to new string after generated
 */

char *leet(char *str)
{
	int size = 0, i;
	char *leet = "a4A4e3E3o0O0t7T7l1L1";

	while (str[size] != '\0')
	{
		while (leet[i] != '\0')
		{
			if (leet[i] == str[size])
				str[size] = leet[i+1];
			i += 2;
		}

		size++;
	}

	return (str);
}
