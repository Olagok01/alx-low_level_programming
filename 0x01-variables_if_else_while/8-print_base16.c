#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Entry point
 * Return: Always 0 ( Success)
 */

int main(void)
{
	int num;
	char letter;

	for (num = 0; num <= 10; num++)
	{
		putchar(num);
	}
	for (letter = 'A'; letter <= 'F'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
