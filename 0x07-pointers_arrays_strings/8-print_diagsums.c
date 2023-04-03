#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function that prints the sum of the
 *	 two diagonals of a square matrix of integers
 * @a: the array of matrix
 * @size: the size o fthe matrix
 */

void print_diagsums(int *a, int size)
{
	int diagonal_right_sum = 0;
	int diagonal_left_sum = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		diagonal_right_sum += *(a + i * size + i);
		diagonal_left_sum += *(a + i * size + (size - i - 1));
	}
	printf("%d, %d\n",sum1, sum2);
}
