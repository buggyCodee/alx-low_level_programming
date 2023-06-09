#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints all arguments it receives
 *
 * @argc: numbers of the arguments passed
 * @argv: stores the arguments itself
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	exit(EXIT_SUCCESS);
}
