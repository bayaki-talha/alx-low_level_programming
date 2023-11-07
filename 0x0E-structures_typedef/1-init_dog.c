#include "dog.h"
#include <stdio.h>

/**
 * init_dog - initializing dog
 * @d: dog init
 * @name: dog's name
 * @age: the dog's age
 * @owner: dog's owner name
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
