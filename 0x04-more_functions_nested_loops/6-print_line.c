#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal.
 * Return 0
 */

void print_line(int n)
{
	int i = 0;
	int n = 0;

	if (n > 0)
	{
		while (i <= n)
		{
			_putchar('_');
			i++;
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
