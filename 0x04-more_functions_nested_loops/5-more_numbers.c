#include "main.h"


void more_numbers(void)
{
	int a;
	int b;

	for (int a = 0; a <= 9; a++)
	{
		for (int b = 0; b <= 14; b++)
		{
			if (b > 9)
			{
				_putchar(b % 10 + '0');
				_putchar(b / 10 + '0');
			}
		}
	}
}
