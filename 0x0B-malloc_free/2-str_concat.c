#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * Return: If concatenation fails - NULL.
 *	Otherwise - a pointer the newly-allocated space in memory
 *	containing the concatenated strings.
 */

char *str_concat(char *s1, char *s2)
{
	char *total_str;
	int new_index = 0, i;
	int length = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i] || s2[i]; i++)
	{
		length++;
	}

	total_str = malloc(sizeof(char) * length);

	if (total_str == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i]; i++)
	{
		total_str[new_index++] = s1[i];
	}
	for (i = 0; s2[i]; i++)
	{
		total_str[new_index++] = s2[i];
	}
	return (total_str);
}
