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
	int i;

	ndog = malloc(sizeof(struct dog));
	if (ndog == 0)
		return (0);

	ndog->name = malloc(sizeof(char *));
	if (ndog == 0)
		return (0);

	ndog->owner = malloc(sizeof(char *));
	if (ndog == 0)
		return (0);

	for (i = 0; name[i] != '\0'; i++)
		ndog->name[i] = name[i];
	for (i = 0; owner[i] != '\0'; i++)
		ndog->owner[i] = owner[i];
	ndog->age = age;

	return (ndog);
}
