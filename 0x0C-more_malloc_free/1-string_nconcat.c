#include <stdlib.h>

/**
 * length - get the size of string
 *
 * @str: target string to get its size
 *
 * Return: the size of str
 */

int length(char *str)
{
	int size = 0;

	if (str != NULL)
		while (str[size] != '\0')
			size++;
	return (size);
}

/**
 * string_nconcat - function that concatenates two strings
 *
 * @s1: first str
 * @s2: second str
 * @n: number of chars to concatenate from s2 in s1
 *
 * Return: pointer shall point to a newly allocated space in memory,
 *		which contains s1 followed by the first n bytes of s2,
 *			and null terminated
 *	If the function fails, it should return NULL
 *	If n is greater or equal to the length of s2 then use the entire
 *						string s2
 * if NULL is passed, treat it as an empty string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	char *new_str;
	unsigned int size_one = length(s1);
	unsigned int size_two = length(s2);
	unsigned int total_size = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	if (n > size_two)
		n = size_two;

	total_size = size_one + n + 1;
	new_str = malloc(total_size);

	if (new_str == NULL)
		return (NULL);

	for (i = 0; i < size_one; i++)
		new_str[i] = s1[i];

	for (; i < total_size - 1; i++)
		new_str[i] = s2[i - size_one];

	new_str[total_size - 1] = '\0';

	return (new_str);
}
