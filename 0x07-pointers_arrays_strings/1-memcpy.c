#include "main.h"

/**
 * char *_memcpy - Write a function that copies memory area.
 * @dest: destination area
 * @src: source area
 * @n: number of byte
 * Return: destination point
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;
	int size_of_byte = n;

	if (size_of_byte > 0)
	{
		for (i = 0; i < size_of_byte; i++)
		{
			dest[i] = src[i];
		}
	}

	return (dest);
}
