#include <stdio.h>

/**
 * print_name - function that prints a name
 *
 * @name: the name to be printed
 * @f: function pointer to anoter function
 *
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL)
		(*f)(name);
}
