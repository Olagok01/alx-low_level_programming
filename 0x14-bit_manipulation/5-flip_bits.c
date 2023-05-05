#include "main.h"

/**
 * flip_bits - Counts the number of bits needed to be
 *	flipped to get from one number to another
 * @n: number
 * @m: number to flip n to
 * Return: necessary number of bits to flip to get from n to m
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int difference = n ^ m;
	unsigned int counts = 0;

	while (difference > 0)
	{
		counts += difference & 1;
		difference >>= 1;
	}
	return (counts);
}
