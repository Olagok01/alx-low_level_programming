#include "main.h"

/**
 * _sqrt - finds the square root of a value
 * @number: number to find the sqrt of
 * @root: the square value
 * Return: the square root
 */
int _sqrt(int number, int root)
{
	if (number > root)
	{
		return (-1);
	}
	else if (number * number == root)
	{
		return (number);
	}

	return (_sqrt(number + 1, root));
}

/**
 * _sqrt_recursion - recursive square root of a number
 * @n: integer
 * Return: the square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	return (_sqrt(1, n));
}
