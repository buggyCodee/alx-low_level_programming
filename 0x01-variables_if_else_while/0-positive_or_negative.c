#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates a random number and prints it
 *	+ if the number "is zero" or "i positive" or "is negative"
 *
 * Return: Always 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("%d ", n);

	if (n == 0)
		puts("is zero");
	else if (n > 0)
		puts("is positive");
	else
		puts("is negative");

	return (0);
}
