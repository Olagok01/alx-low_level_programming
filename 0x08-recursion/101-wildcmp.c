#include "main.h"

/**
 * string_match - check if a substring after wildcard matches s1
 * @s1: one string
 * @s2: one string
 * @compare: position right after comparison
 * Return: 1 if matched, 0 if not
 */

int string_match(char *s1, char *s2, char *compare)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	if (*s1 == '\0' && *s2 == '*')
	{
		return (string_match(s1, s2 + 1, s2 + 1));
	}
	if (*s1 == '\0' && *s2 != '\0')
	{
		return (0);
	}
	if (*s2 == '*')
	{
		return (string_match(s1, s2 + 1, s2 + 1));
	}
	if (*s1 == *s2)
	{
		return (string_match(s1 + 1, s2 + 1, compare));
	}
	else
	{
		return (string_match(s1 + 1, compare, compare));
	}
}

/**
 * wildcmp - compare if string with wildcard mattches
 * @s1: one string
 * @s2: one string
 * Return: 1 if matched, 0 if not
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	else if (*s2 == '*')
	{
		return (substring_match(s1, (s2 + 1), (s2 + 1)));
	}
	else
	{
		return (0);
	}
}
