#include "main.h"

/**
 * factorial - function that returns the factorial of a given number
 *
 * @n: the number to calculate it's factorial
 *
 * Return:int which is0 the factorial of n
 */

int factorial(int n)
{
	if (n < 0)
		return -1;
	if (n == 0)
		return 1;
	return n * factorial(n-1);
}
