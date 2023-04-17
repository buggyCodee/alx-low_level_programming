#include "dog.h"

/**
 * print_dog - function that prints a struct dog
 *
 * @d: pointer to the struct to be printed
 *
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		printf("(nil)\n");
	else
	{
		if (d->name == NULL)
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
