#include "main.h"

/**
 * cap_string - function that capitalizes all words of a string
 *
 * @str: input string that it's words need to be capitalized
 *
 * Return: Pointer to the new capitalized string
 */

char *cap_string(char *str)
{
	int i, j;
	const int size = 13;
	char separators[14] = {' ', '\n', '\t', ',', ';', '.',
				'!', '?', '\"', '(', ')', '{', '}'};

	if ('a' <= str[0] && str[0] <= 'z')
		str[0] = str[0] - 'a' + 'A';

	for (i = 1; str[i] != '\0'; i++)
	{
		int valid = 0;

		for (j = 0; j < size; j++)
			if (str[i - 1] == separators[j])
			{
				valid = 1;
				break;
			}

		if (valid && ('a' <= str[i] && str[i] <= 'z'))
			str[i] = str[i] - 'a' + 'A';
	}

	return (str);
}
