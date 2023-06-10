#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints the minimum number of coins
 *		to make change for an amount of money
 *
 * @argc: number of arguments passed to the program
 * @argv: it's like an array that stores the args of the prog
 *
 * Return: 1 if the number of arguments passed to your program is not exactly 1
 *		0 otherwise
 */

int main(int argc, char *argv[])
{
	int cents;
	int values[] = { 25, 10, 5, 2, 1 };

	if (argc != 2)
	{
		puts("Error");
		exit(1);
	}

	cents = atoi(argv[1]);

	if (cents <= 0)
		puts("0");
	else
	{
		int i, coins = 0;

		for (i = 0; i < 5; i++)
		{
			coins += cents / values[i];
			cents %= values[i];
		}

		printf("%d\n", coins);
	}

	exit(EXIT_SUCCESS);
}
