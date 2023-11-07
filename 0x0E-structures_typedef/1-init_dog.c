#include "dog.h"

/**
 * init_dog - initialize dog
 * @d: initialize dog
 * @name: the dog name
 * @age: the dog age
 * @owner: owner's name
 *
 * Return: void.
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
