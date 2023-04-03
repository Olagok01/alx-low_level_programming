#include "main.h"
#define NULL 0

/**
 * _strstr - function that locates a substring.
 * @haystack: strong to be searched for
 * @needle: target substring to search for
 * Return: pointer to string a the first occurrence
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, num;

	if (needle[0] == '\0')
	{
		return (haystack);
	}
	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			j = 0;
			num = i;
			for (j = 0; needle[j] != '\0'; j++)
			{
				if (haystack[num] == needle[j])
				{
					num++;
				}
				else
				{
					break;
				}
			}
			if (needle[j] == '\0')
			{
				return (haystack + i);
			}
		}
	}
	return (NULL);
}
