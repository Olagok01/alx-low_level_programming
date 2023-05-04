#include "main.h"

/**
 * set_bit - sets a specific bit at a particular position
 * @num: pointer to the bit being set
 * @index: position being referred to
 * Return: 1 if success, -1 if fail
 */
int set_bit(unsigned long int *num, unsigned int index)
{
	unsigned long int bit = 1;

	if (index > (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}	
	bit = bit << index;
	*num = *num | bit;
	return (1);
}
