#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new variable type struct dog
 *
 * @name: name
`* @age: age
 * @owner: owner
 *
 * Return: new dog_t.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndog;

	ndog = malloc(sizeof(dog_t));
	if (ndog == 0)
		return (0);
	ndog->name = name;
	ndog->age = age;
	ndog->owner = owner;

	return (ndog);
}
