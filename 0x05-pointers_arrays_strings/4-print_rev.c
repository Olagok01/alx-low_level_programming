#include "main.h"

/**
 * print_rev - func that prints a string, in reverse
 * 		 followed by a new line
 * @s: declaration of s and paramters for the function
 * Return: Always 0.
 */

void print_rev(char *s)
{
	int c;
	int length = 0;

	for (c = 0; s[c] != 0; c++)
	{
		length++;
	}

	for (c = length; c >= 0; c--)
	{
		_putchar(s[c]);
	}
	_putchar('\n');
}
