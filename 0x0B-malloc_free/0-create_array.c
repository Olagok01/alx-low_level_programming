#include "main.h"
#include <stdlib.h>

/**
 * create_array -  function that creates an array of chars,
 *	and initializes it with a specific char.
 * @size: The size of the array to be initialized.
 * @c: The specific char to intialize the array with.
 * Return: If size == 0 or the function fails - NULL.
 *	Otherwise - a pointer to the array.
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i = 0;

	if (size <= 0)
	{
		return (NULL);
	}

	str = malloc(sizeof(*str) * size);

	if (str == NULL)
	{
		return (NULL);
	}

	while (i < size)
	{
		str[i] = c;
		i++;
	}
	str[i] = '\0';

	return (str);
}
