#include "dog.h"

/**
 * init_dog - function that initialize a variable of type struct dog
 *
 * @d: pointer to the struct we want intialize
 * @name: the name to be intialized
 * @age: the age to be intialized
 * @owner: the owner to be intialized
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;

		/*another way by derefrencing the pointer*/
		(*d).owner = owner;
	}
}
