#include "main.h"




void times_table(void)
{
	int a = 0;
	int b = 0;
	int result;

	while (a < 10)
	{

		while (b < 10)
		{
			result = (a * b);
			_putchar(result + '0');
			_putchar(',')
			b++;
		}

		_putchar('\n');
		a++;
	}
}
