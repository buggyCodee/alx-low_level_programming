#include "dog.h"
6
/**
 * print_dog - function that prints a struct dog
 *
 * @d: pointer to the struct to be printed
 *
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: ");
		(d->name == NULL ? printf( "(nill)\n") : printf("%s\n", d->name));

		printf("Age: %f\n", d->age);

		printf("Owner: ");
		(d->owner == NULL ? printf("(nill)\n") : printf("%s\n", d->owner));
	}
}
