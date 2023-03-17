#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	char low = 'a';

	for (low = 'a'; low <= 'z'; low++)
	{
		putchar(low);
	}
	return (0);
}
