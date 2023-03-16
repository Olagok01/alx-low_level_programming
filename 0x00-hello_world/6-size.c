#include <stdio.h>

/**
 * main - Entry point
 *
 * Return : Always 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("Size of char: %c byte(s)\n", sizeof(a));
	printf("Size of int: %d byte(s)\n", sizeof(b));
	printf("Size of long int %lu byte(s)\n", sizeof(c));
	printf("Size of long long int %lld byte(s)\n", sizeof(d));
	printf("Size of float %f byte(s)\n", sizeof(e));
}
