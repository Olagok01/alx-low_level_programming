#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	char letter = 'a';
	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	for (letter = 'A'; letter <= 'Z'; letter++)
	{
		putchar(letter);
		putchar('\n');
	}
	return (0);
}
