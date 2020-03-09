#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialize a variable type struct dog
 *
 * @d: variable
 * @name: name
`* @age: age
 * @owner: owner
 *
 * Return: void.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
		if (d == NULL)
			return;
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
