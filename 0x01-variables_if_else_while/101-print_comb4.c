#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point.
 * Return: Always (0) Success
 */

int main(void)
{
	int num_1 = 0;
	int num_2 = 0;
	int num_3 = 3;

	for (num_1 = 0; num_1 <= 9; num_1++)
	{
		for (num_2 = 0; num_2 <= 9; num_2++)
		{
			for (num_3 = 0; num_3 <= 9; num_3++)
			{
				if (num_2 > num_1)
				{
					if (num_3 > num_2)
					{
						putchar('0' + num_1);
						putchar('0' + num_2);
						putchar('0' + num_3);
						if (!(num_1 == 7 && num_2 == 8 && num_3 == 9))
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
