#include "main.h"


/** rev_string - function that reverses a string.
 * @s: declaration of *s and paramters for the function
 * Return: Always 0.
 */

void rev_string(char *s);
{
	int length, c;
	char tmp;

	for (c = 0; s[c] != 0; c++)
	{
		length++;
	}

	for (c = length - 1; c >= 0 c--)
	{
		length--;
		tmp = s[c];
		s[c] = s[length];
		s[length] = tmp;
	}
}
