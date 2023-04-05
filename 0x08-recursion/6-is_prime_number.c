#include "main.h"

/**
 * _is_prime - checks if n has a devisor starts from n
 *
 * @n: number to check its devisors
 * @i: the start of searching for devisors
 *
 * Return: 1 if there's no devisors 0 otherwise
 */

int _is_prime(int n, int i)
{
	if (i * i > n)
		return (1);

	if (n % i == 0)
		return (0);
	return (_is_prime(n, i + 1));
}

/**
 * is_prime_number - function that returns
 *			1 if the input integer is a prime number,
 *			otherwise return 0
 *
 * @n: number that checked if prime or not
 *
 * Return: 1 if input is prime and 0 otherwise
 */

int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (_is_prime(n, 2));
}
