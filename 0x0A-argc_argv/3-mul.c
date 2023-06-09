#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numbers
 *
 * @argc: the args count that passed to the program
 * @argv: the args itself
 *
 * Return: 1 If the program does not receive two arguments
 *		0 otherwise
 */

int main(int argc, char *argv[])
{
	long int result;

	if (argc != 3)
	{
		puts("Error");
		exit(1);
	}


	result = atoi(argv[1]) * atoi(argv[2]);
	printf("%ld\n", result);

	exit(EXIT_SUCCESS);
}
