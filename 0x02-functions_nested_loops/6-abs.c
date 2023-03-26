#include "main.h"

/**
 * _abs - function that computes the absolute value of an integer
 *
 * @n: the number to calc _abs
 *
 * Return: absolute of n
 */

int _abs(int n)
{
	if (n < 0)
		n = -n;

	return (n);
}
