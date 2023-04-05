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
 * is_palindrome - function that returns 1 if a string is a palindrome
 *			and 0 if not
 *
 * @s: string to be checked
 *
 * Return: 1 if a string is a palindrome and 0 if not
 */

int is_palindrome(char *s)
{
	int sz = _strlen_recursion(s);

	return (_is_palindrome(s, 0, sz));
}
