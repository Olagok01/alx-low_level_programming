#include "function_pointers.h"

/**
 * print_name - Execute a function given as a parameter
 *	to print a name
 * @name: Parameter that function ptr needs
 * @f:function to execute
 *
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
