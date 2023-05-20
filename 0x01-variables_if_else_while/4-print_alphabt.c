#include <stdio.h>

/**
 * main - program that prints the alphabet in lowercase, followed by a new line
 *		except q and e
 *
 * Return: Always 0
 */

int main(void)
{
	char start = 'a';

	while (start <= 'z')
		if (start == 'q' || start == 'e')
		{
			start++;
			continue;
		}
		else
			putchar(start++);
	putchar('\n');

	return (0);
}
