#include "main.h"

/**
 * factorial - Returns the factorial of a given number.
 * @n: number to calculate the factorial of
 * Return: n > 0 - the factorial of n
 *         n < 0 - 1 to indicate an error
 */

int factorial(int n)
{
	if (n >= 0 && n <= 1)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
