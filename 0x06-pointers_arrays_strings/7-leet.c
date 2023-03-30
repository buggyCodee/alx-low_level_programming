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
	int size = 0;

	while (str[size] != '\0')
	{
		if (str[size] == 'a' || str[size] == 'A')
			str[size] = '4';
		else if (str[size] == 'e' || str[size] == 'E')
			str[size] = '3';
		else if (str[size] == 'o' || str[size] == 'O')
			str[size] = '0';
		else if (str[size] == 't' || str[size] == 'T')
			str[size] = '7';
		else if (str[size] == 'l' || str[size] == 'L')
			str[size] = '1';

		size++;
	}

	return (str);
}
