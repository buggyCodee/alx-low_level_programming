#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints the number of arguments passed into it
 *
 * @argc: number of arguments passed to the program
 * @argv: it's like an array that stores the args of the prog
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);

	exit(EXIT_SUCCESS);
}
