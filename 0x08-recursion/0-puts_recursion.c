#include "main.h"

/**
 * print_chars - print string char by char recursively
 *
 * @s: string to be printed
 * @i: index of the current printed char
 *
 * Return: void
 */

void print_chars(char *s, int i)
{
	if (s[i] == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(s[i]);
	print_chars(s, ++i);
}

/**
 * _puts_recursion - function that prints a string, followed by a new line
 *
 * @s: string to be printed
 *
 * Return: void
 */

void _puts_recursion(char *s)
{
	print_chars(s, 0);
}
