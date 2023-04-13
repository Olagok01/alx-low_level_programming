#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked -  function that allocates memory using malloc.
 * @b: the number of memmroy to be allocated
 * Return: A pointer to the allocated memory.
 */

void *malloc_checked(unsigned int b)
{
	void *y = malloc(b);

	if (y == NULL)
	{
		exit(98);
	}
	return (y);
}
