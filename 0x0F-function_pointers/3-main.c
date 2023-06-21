#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

/**
 * main - starting point of the prog
 *
 * @argc: counter of the arguments passed
 * @argv: the argumnets itself
 *
 * Return:	the number of arguments is wrong exit with the status 98
 *		the operator check fails exit with the status 99
 *		if the user tries to divide (/ or %) by 0 exit with
 *						the status 100
 */

int main(int argc, char *argv[])
{
	int num_one;
	int num_two;
	char *operator;

	if (argc != 4)
	{
		puts("Error");
		exit(98);
	}

	num_one = atoi(argv[1]);
	num_two = atoi(argv[3]);
	operator = argv[2];

	if (get_op_func(operator) == NULL || operator[1] != '\0')
	{
		puts("Error");
		exit(99);
	}

	if ((*operator == '/' || *operator == '%') && num_two == 0)
	{
		puts("Error");
		exit(100);
	}

	printf("%d\n", get_op_func(operator)(num_one, num_two));

	exit(EXIT_SUCCESS);
}
