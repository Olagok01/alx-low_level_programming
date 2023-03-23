#include "main.h"

/**
 * print_squre - function that prints a square, followed by a new line
 * @size: the int for the paramaters of my function
 * Return: 0
 */


void print_square(int size)
{
	int a = 0;
	int b = 0;
	int c = size;

	if (c > 0)
	{
		while (a < size)
		{
			while (b < size)
			{
				_putchar('#');
				b++;
			}
			_putchar('#');
			a++;
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
