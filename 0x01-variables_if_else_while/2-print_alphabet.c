#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main()
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
	{
		putchar("%c", low);
		putchar("\n");
	}
	return (0);
}
