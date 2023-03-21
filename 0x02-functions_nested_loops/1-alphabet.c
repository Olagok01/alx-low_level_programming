#include "main.h"

/**
 * main - Prints the alphabet, in lowercase, followed by a new line.
 * Return: Always(0) Success
 */

int main(void)
{
	char low = 'a';

	while (low < 'z')
	{
		_putchar(low);
		low ++;
	}
	_putchar('\n');
	return (0);
}
