#include "main.h"
#include <stdlib.h>

/**
 * calloc - allocates memory for an array of a certain number
 *	of elements each of an inputted byte size.
 * @nmemb: number of elements.
 * @size: byte size of each array element.
 * Return: function fails - NULL.
 *	Otherwise - a pointer to the allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	void *y = malloc(nmemb * size);

	if (y == NULL)
	{
		return (NULL);
	}

	arr = y;

	for (i = 0; i < (nmemb * size); i++)
	{
		arr[i] = '\0';
	}

	return (y);
}
