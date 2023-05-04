#include "main.h"

/**
 * binary_to_uint - convert binary to unsigned int
 * @b: binary
 * Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int num = 0, mult = 1;

	if (*b == '\0')
		return (0);
	for (i = 0; b[i];)
	{
		i++;
	}
	for (i = i - 1; i >= 0; i--)
	{
		if (b[i] != '1' && b[i] != '0')
		{
			return (0);
		}
		num += (b[i] - '0') * mult;
		mult *= 2;
	}
	return (num);
}
