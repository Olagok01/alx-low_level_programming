#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal.
 * @n: the int for the paramaters of my function
 * Return: 0
 */

void print_diagonal(int n)
{
	int a = 0;
	int b = 0;
	int c = n

	if (c > 0)
	{
		while (a < c)
		{
			while (b < a)
			{
				_putchar(' ');
				b++;
			}
			a++;
			b = 0;
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
