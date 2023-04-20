#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_char - prints char
 * @va_list: args
 */

void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_int - prints int
 * @va_list: args
 */
void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_float - prints float
 * @va_list: args
 */
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_string - prints string
 * @va_list: args
 */
void print_string(va_list args)
{
	char *s;

	s = va_arg(args, char *);

	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}

/**
 * print_all - print varying input of ints, chars, floats, and strings
 * @format: an array of chars signifying which data type to print
 */
void print_all(const char * const format, ...)
{
	char *separator = "";
	int index, j = 0;
	va_list args;

	data choice[] = { {'c', print_char},
			  {'i', print_int},
			  {'f', print_float},
			  {'s', print_string},
			  {'\0', NULL} };

	va_start(args, format);
	while (format != NULL && format[j] != '\0')
	{
		index = 0;
		while (choice[index].letter != '\0')
		{
			if (choice[index].letter == format[j])
			{
				printf("%s", separator);
				choice[index].func(args);
				separator = ", ";
			}
			index++;
		}
		j++;
	}

	va_end(args);
	printf("\n");
}
