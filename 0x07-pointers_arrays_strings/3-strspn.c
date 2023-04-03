#include "main.h"

/**
 * int _strspn - function that gets the length of a prefix substring.
 * @s: string to be searched for
 * @accept: prefix to be measured
 * Return: length of byts in for the prefix substring
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int length = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				length++;
				break;
			}
			if (accept[j + 1] == '\0')
			{
				return (length);
			}
		}

	}
	return (length);
}
