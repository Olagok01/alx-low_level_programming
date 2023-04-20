#include "variadic_functions.h"
#include <stdarg.h>



int sum_them_all(const unsigned int n, ...)
{
	unsigned sum = 0, i;
	va_list valist_ap;

	if (n == 0)
	{
		return (0);
	}

	va_start (valist_ap, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(valist_ap, int);
	}

	va_end(valist_ap);

	return (sum);
}
