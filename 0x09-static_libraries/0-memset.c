#include "main.h"

/**
 * char *_memset - function that fills memory with a constant byte.
 * @s: pointer to the memory
 * @b: constant byte
 * @n: number of byte to fill
 * Return: memory *s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;
	int size_of_byte = n;

	if (size_of_byte > 0)
	{
		while (i < size_of_byte)
		{
			s[i] = b;
			i++;
		}
	}
	return (s);
}
