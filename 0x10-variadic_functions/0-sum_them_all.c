#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - return sum when given unknown amount of arguments
 * @n: integers to add
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0, i;
	va_list valist_ap;

	if (n == 0)
	{
		return (0);
	}

	va_start(valist_ap, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(valist_ap, int);
	}

	va_end(valist_ap);

	return (sum);
}
