#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings
 *
 * @s1: the first string
 * @s2: the second string
 *
 * Return: pointer should point to a newly allocated space in memory which
 *		contains the contents of s1, followed by the contents of s2,
 *			and null terminated
 */

char *str_concat(char *s1, char *s2)
{
	int i;
	int size_one = 0;
	int size_two = 0;
	int total_size = 0;
	char *new_str;

	if (s1 != NULL)
		while (s1[size_one] != '\0')
			size_one++;

	if (s2 != NULL)
		while (s2[size_two] != '\0')
			size_two++;

	total_size = size_one + size_two + 1;

	new_str = malloc(sizeof(char) * total_size);

	if (new_str == NULL)
		return (new_str);

	for (i = 0; i < size_one; i++)
		new_str[i] = s1[i];

	for (i = 0; i < size_two; i++)
		new_str[size_one + i] = s2[i];

	new_str[total_size - 1] = '\0';

	return (new_str);
}
