#ifndef ALX_0X0E_DOG_H_
#define ALX_0X0E_DOG_H_

/**
 * struct dog - structure to the dog
 *
 * @name: the dog name
 * @age: the dog age
 * @owner: the dog owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
