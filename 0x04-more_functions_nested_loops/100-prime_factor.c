#include "main.h"

/**
 * main - finds and prints the largest prime factor
 *		of the number 612852475143, followed by a new line.
 *
 * Return: Always 0
 */

int main(void)
{
	long int largest_devisor = 2;
	long int num = 612852475143;

	while (num > 1)
		if (num % largest_devisor == 0)
			num /= largest_devisor;
		else
			largest_devisor++;

	printf("%li\n", largest_devisor);

	return (0);
}
