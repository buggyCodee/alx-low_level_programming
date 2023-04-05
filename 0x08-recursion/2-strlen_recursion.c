#include "main.h"

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
		return 0;
	return 1 + len_rec(s, i + 1);
}

/**
 * _strlen_recursion - function that returns the length of a string
 *
 * @s: string to be get its size
 *
 * Return: int that is the size of s
 */

int _strlen_recursion(char *s)
{
	return len_rec(s, 0);
}
