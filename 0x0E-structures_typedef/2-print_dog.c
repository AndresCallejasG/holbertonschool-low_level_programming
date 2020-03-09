#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints dog atrributes.
 *
 * @d: dog to print
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == 0)
			d->name = "(nil)";
		if (d->owner == 0)
			d->owner = "(nil)";
		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
	}
}
