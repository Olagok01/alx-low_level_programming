#include "main.h"




void times_table(void)
{
	int a = 0;
	int b;
	int result;

	while (a < 10)
	{
		b = 1;

		while (b < 10)
		{
			if (b != 9)
			{
				result = (a * b);
				_putchar(result + '0');
				_putchar(',');
				b++;
			}
		}

		_putchar('\n');
		a++;
	}
}
