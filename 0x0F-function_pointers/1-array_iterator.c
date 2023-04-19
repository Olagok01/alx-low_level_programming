#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - array_iterator - Executes a function given as a
 *	parameter on each element of an array.
 * @array: the array
 * @size: the size of array
 * @action: pointer to function that we need to execute
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
