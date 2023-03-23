#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal.
 * @n: the int for the paramaters of my function
 * Return: 0
 */

void print_diagonal(int n)
{

	int a = 0;


	if (n > 0)
	{
		while (a <= n)
		{
			_putchar(' ');
			a++;
		}
		_putchar('\\');
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
