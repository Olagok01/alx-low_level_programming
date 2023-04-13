#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings using at
 *	most an inputted number of bytes.
 * @s1: first string.
 * @s2: second string.
 * @n: The maximum number of bytes of s2 to concatenate to s1.
 * Return: If the function fails - NULL.
 *	Otherwise - a pointer to the concatenated space in memory.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i;
	unsigned int length = n;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	for (i = 0; s1[i]; i++)
	{
		length++;
	}

	str = malloc(sizeof(char) * (length + 1));

	if (str == NULL)
	{
		return (NULL);
	}

	length = 0;

	for (i = 0; s1[i]; i++)
	{
		str[length++] = s1[i];
	}
	for (i = 0; s2[i] && i < n; i++)
	{
		str[length++] = s2[i];
	}
	str[length] = '\0';
	return (str);
}
