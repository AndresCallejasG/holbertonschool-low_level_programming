#include "holberton.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 *
 * @ptr: old pointer
 * @old_size: size of ptr
 * @new_size: in bytes, the\
 * new memory block size
 * Return: Always 0.
 * if fails null
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	char *t_ptr;
	char *t2_ptr;
	unsigned int i;

	if (new_size == 0 && ptr != 0)
	{
		free(ptr);
		return (0);
	}
	new_ptr = malloc(new_size);

	if (new_ptr == 0)
		return (0);
	if (ptr == 0)
		return (new_ptr);
	if (new_size == old_size)
		return (ptr);
	t_ptr = new_ptr;
	t2_ptr = ptr;
	for (i = 0; i < new_size; i++)
	{
		t_ptr[i] = t2_ptr[i];
	}
	free(ptr);
	return (new_ptr);
}
