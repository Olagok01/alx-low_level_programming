#include "main.h"


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
