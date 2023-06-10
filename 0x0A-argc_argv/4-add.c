#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that adds positive numbers
 *
 * @argc: the args count that passed to the program
 * @argv: the args itself
 *
 * Return: 1 If the program does not receive two arguments
 *		0 otherwise
 */

int main(int argc, char *argv[])
{
	int i, addition = 0;

	for (i = 1; i < argc; i++)
	{
		int j, num = 0;

		for (j = 0; argv[i][j] != '\0'; j++)
			if ('0' <= argv[i][j] && argv[i][j] <= '9')
				num = 10 * num + (argv[i][j] - '0');
			else
			{
				puts("Error");
				exit(1);
			}
		addition += num;
	}

	printf("%d\n", addition);

	exit(EXIT_SUCCESS);
}
