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
	int i = 0;

	while (s1[i] == s2[i] && s1[i] != '\0')
		i++;

	if (s1[i] != s2[i])
		value = s1[i] - s2[i];

	return (value);
}
