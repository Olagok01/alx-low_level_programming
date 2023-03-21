#include "main.h"

/**
 * main - Prints the alphabet in lowercase
 * Return: Always(0) Success
 */

void print_alphabet(void)
{
	char low = 'a';

	while (low <= 'z')
	{
		_putchar(low);
		low++;
	}
	_putchar('\n');
}
