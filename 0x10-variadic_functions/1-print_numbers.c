#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers, followed by a new line
 *
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 *
 * Return: Nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		if (i && separator != NULL)
			printf("%s", separator);
		printf("%d", va_arg(args, int));
	}

	printf("\n");
}
