#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9)
 *
 * @c: the digit to be checked
 *
 * Return: 1 if c is a digit and 0 otherwise
 */

int _isdigit(int c)
{
	return ('0' <= c && c <= '9');
}
