#include "dog.h"

/**
 * init_dog - initializing dog
 * @c: dog init
 * @name: dog's name
 * @age: the dog's age
 * @owner: dog's owner name
 *
 * Return: 0 (Success)
*/
void init_dog(struct dog *c, char *name, float age, char *owner)
{
	if (c)
	{
		c->name = name;
		c->age =age;
		c->owner;
	}
}
