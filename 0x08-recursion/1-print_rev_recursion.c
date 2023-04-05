#include "main.h"

/**
 * _puts_rev - puts te character in a reverse order from specified index
 *
 * @s: string to be printed
 * @i: current index in the string
 *
 * Return: void
 */

void _puts_rev(char *s, int i)
{
	if (s[i] == '\0')
		return;
	_puts_rev(s, i + 1);
	_putchar(s[i]);
}

/**
 * _print_rev_recursion - function that prints a string in reverse
 *
 * @s: string to be printed in reverse
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	_puts_rev(s, 0);
}
