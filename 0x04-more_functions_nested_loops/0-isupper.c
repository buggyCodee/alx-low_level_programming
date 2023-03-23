#include "main.h"

/**
 * _isupper - checks for uppercase character
 *
 * @c: character to be checked
 *
 * Return: 1 if c is uppercase and 0 otherwise
 */

int _isupper(int c)
{
	return ('A' <= c && c <= 'Z');
}
