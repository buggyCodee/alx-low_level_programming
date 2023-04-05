#include "main.h"

/**
 * _is_palindrome - checks palindrome recursively
 *
 * @s: string to be checked
 * @i: current index to be checked
 * @sz: size of the string
 *
 * Return: 1 if a string is a palindrome and 0 if not
 */

int _is_palindrome(char *s, int i, int sz)
{
	if (i > sz / 2)
		return (1);

	if (s[i] != s[sz - 1 - i])
		return (0);

	return (_is_palindrome(s, i + 1, sz));
}

/**
 * len_rec - funtion that gets size from specified index
 *
 * @s: string to be its size
 * @i: started index to get the size from
 *
 * Return: int which is the size of s
 */

int len_rec(char *s, int i)
{
	if (s[i] == '\0')
		return (0);
	return (1 + len_rec(s, i + 1));
}

/**
 * is_palindrome - function that returns 1 if a string is a palindrome
 *			and 0 if not
 *
 * @s: string to be checked
 *
 * Return: 1 if a string is a palindrome and 0 if not
 */

int is_palindrome(char *s)
{
	int sz = len_rec(s, 0);

	return (_is_palindrome(s, 0, sz));
}

