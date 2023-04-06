#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: the string to be measured
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int length = 0;
	
	if (*s != '\0')
	{
		length++;
		length += _strlen(s + 1)
	}
	return (length);
}


/**
 * _compare_string - checks if a string is a palindrome
 * @s: the string to check
 * @length: the length of s
 * @index: the index of the string to be checked
 * Return: if the string is a palindrome - 1.
 *         if the string is not a palindrome - 0.
 */

int _compare_string(char *s, int length, int index)
{
	if (s[index] == s[length / 2])
	{
		return (1);
	}
	if (s[index] == s[length - index - 1])
	{
		return (_compare_string(s, length, index + 1));
	}
	return (0);
}

/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: the string to check
 * Return: if the string is a palindrome - 1.
 *         if the string is not a palindrome - 0.
 */

int is_palindrome(char *s)
{
	int index = 0;
	int length = _strlen(s);
	
	if (!(*s))
	{
		return (1);
	}
	return (_compare_string(s, length, index));

}
