#include "main.h"

/**
 * main - starting point
 *
 * Return: Always 0
 */

int main(void)
{
	int start;

	for (start = 1; start <= 100; start++)
	{
		if (start % 3 == 0 && start % 5 == 0)
			printf("FizzBuzz ");
		else if (start % 3 == 0)
			printf("Fizz ");
		else if (start % 5 == 0)
			printf("Buzz ");
		else if (start == 100)
			printf("%d\n", start);
		else
			printf("%d ", start);
	}

	return (0);
}
