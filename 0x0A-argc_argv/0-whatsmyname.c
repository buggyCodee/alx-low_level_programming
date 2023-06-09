#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints its name, followed by a new line
 *
 * @argc: number of arguments passed to the program
 * @argv: like a string array that stores the arguments paased to the program
 *
 * Return: Always 0
 */

int main(int __attribute__((unused)) argc, char *argv[])
{
	printf("%s\n", argv[0]);

	exit(EXIT_SUCCESS);
}
