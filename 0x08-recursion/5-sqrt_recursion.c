#include "main.h"

/**
 * _get_sqrt - checks numbers from 0 to i * i for square toot
 *
 * @n: number to get its square root
 * @i: current number to check if it's the square root or not
 *
 * Return: int which is square root if found -1 otherwise
 */

int _get_sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);

	if (i * i == n)
		return (i);
	return (_get_sqrt(n, i + 1));
}

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 *
 * @n: the number that needs to get its square root
 *
 * Return: int which is square root of n
 */

int _sqrt_recursion(int n)
{
	return (_get_sqrt(n, 0));
}
