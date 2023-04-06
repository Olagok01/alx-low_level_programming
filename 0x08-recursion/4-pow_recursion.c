#include "main.h"

/**
 * _pow_recursion - Returns the value of x raised to the power of y.
 * @x: number to raise
 * @y: the power
 * Return: value of x raised to the power of y
 */

int _pow_recursion(int x, int y)
{
	int answer = x;

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	answer *= (x * (_pow_recursion(x, y-1)));
	return (answer);
}
