#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to a newly allocated space in
 *	memory, which contains a copy of the string given as a parameter.
 * @str: string to duplicate
 * Return: If str == NULL or insufficient memory is available - NULL.
 *	Otherwise - a pointer to the duplicated string.
 */

char *_strdup(char *str)
{
	char *copy;
	int i = 0;
	int length = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		length++;
		i++;
	}
	copy = malloc(sizeof(*copy) * length + 1);

	if (copy == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i]; i++)
	{
		copy[i] = str[i];
	}
	copy[i] = '\0';
	return (copy);
}
