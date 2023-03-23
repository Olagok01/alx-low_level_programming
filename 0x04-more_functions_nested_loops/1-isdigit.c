#include "main.h"

/**
 * _isdigit - function that checks for digit from 0 - 9.
 * @c: the int for the paramaters of my function
 * Return: 0
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
