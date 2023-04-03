#include "main.h"
#define NULL 0

/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 * @s: string to be searched for
 * @accept: target matches to be located
 * Return: pointer to index of string to be found at first occurence
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				s = s[i];
				return (s);
			}
			else 
			{
				return (NULL);
			}
		}
	}
}
