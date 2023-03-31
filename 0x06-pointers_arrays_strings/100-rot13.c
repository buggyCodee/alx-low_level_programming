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
	int i, j;

	char characters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
		for (j = 0; characters[j] != '\0'; j++)
			if (characters[j] == str[i])
				str[i] = rot13[j];

	return (str);
}
