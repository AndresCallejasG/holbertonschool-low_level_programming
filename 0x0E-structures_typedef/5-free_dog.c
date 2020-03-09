#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees a variable type struct dog
 *
 * @d: direction to dog
 *
 * Return: voiud
 */
void free_dog(dog_t *d)
{
	if(d)
	{
	free(d->name);
	free(d->owner);
	free(d);
	}
}
