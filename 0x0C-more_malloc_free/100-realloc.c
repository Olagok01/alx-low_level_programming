#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Reallocates a memory block using malloc and free.
 * @ptr: pointer to the memory previously allocated.
 * @old_size: size in bytes of the allocated space for ptr.
 * @new_size: size in bytes for the new memory block.
 * Return: If new_size == old_size - ptr.
 *	If new_size == 0 and ptr is not NULL - NULL.
 *	Otherwise - a pointer to the reallocated memory block.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *memory;
	char *ptr_copy, *string;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		memory = malloc(new_size);

		if (memory == NULL)
			return (NULL);

		return (memory);
	}

	if (new_size == 0 && ptr != NULL)
	{
		return (NULL);
		free(ptr);
	}

	ptr_copy = ptr;
	memory = malloc(sizeof(*ptr_copy) * new_size);

	if (memory == NULL)
	{
		return (NULL);
		free(ptr);
	}

	string = memory;

	for (i = 0; i < old_size && i < new_size; i++)
		string[i] = *ptr_copy++;

	free(ptr);
	return (memory);
}
