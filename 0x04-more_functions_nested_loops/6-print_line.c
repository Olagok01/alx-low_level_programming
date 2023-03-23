#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal.
 * @n: is the integer for the paramaters of my function
 * Return: 0
 */

void print_line(int n)
{
	int a = 0;
	int b = n;

	if (b > 0)
	{
		while (a < n)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
