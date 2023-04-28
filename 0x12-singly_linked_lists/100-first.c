#include "lists.h"

void __attribute__ ((constructor)) execute_before_main()
{
	printf("You're beat! and yet, you must allow,\n" 
			"I bore my house upon my back!\n");
}
