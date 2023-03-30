#include "main.h"

/**
 * _strcmp - function that compares two strings
 *
 * @s1: first string to be compared
 * @s2: second string to be compared
 *
 * Return:	0, if the s1 and s2 are equal;
 *		negative value if s1 is less than s2;
 *		a positive value if s1 is greater than s2.
 */

int _strcmp(char *s1, char *s2)
{
	int value = 0;
	int s1_size = 0;
	int s2_size = 0;
	int min_size;
	int i;

	while (s1[s1_size] != '\0')
		s1_size++;

	while (s2[s2_size] != '\0')
		s2_size++;

	min_size = s1_size;

	if (s2_size < s1_size)
		min_size = s2_size;

	for (i = 0; i < min_size; i++)
		if (s1[i] > s2[i])
		{
			value = 1;
			break;
		}
		else if (s2[i] < s2[i])
		{
			value = -1;
			break;
		}

	if (value == 0 && s1_size != s2_size)
	{
		if (s1_size < s2_size)
			value = -1;
		else
			value = 1;
	}

	return (value);
}
