#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry Point
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num = 0;

	for (num = 0; num <= 9; num++)
	{
		putchar('0' + num);
		if (num != 9){
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
