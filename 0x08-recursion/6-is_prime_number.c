#include "main.h"

int _divisible(int number, int div);
int is_prime_number(int n);

/**
 * _divisible - Checks if a number is divisible.
 * @number: number to be check
 * @div: the divisor
 * Return: if the number is divisible - 0.
 *         if the number is not divisible - 1.
 */

int _divisible(int number, int div)
{
	if (number % div == 0)
		return (0);

	if (div == number / 2)
		return (1);

	return (_divisible(number, div + 1));
}

/**
 * is_prime_number - Checks if a number is prime.
 * @n: the number to be checked
 * Return: If the integer is not prime - 0.
 *         If the number is prime - 1.
 */
int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
		return (0);

	if (n >= 2 && n <= 3)
		return (1);

	return (_divisible(n, div));
}
