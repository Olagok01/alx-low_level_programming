#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * argstostr - function that concatenates all the arguments of your program
 * @ac: argc
 * @av: arguments
 * Return: pointer to array
 */

char *argstostr(int ac, char **av)
{
	int index, j;
	char *string;
	int length = ac;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (index = 0; index < ac; index++)
	{
		for (j = 0; av[index][j]; j++)
		{
			length++;
		}
	}

	string = malloc(sizeof(char) * length + 1);
	
	if (string == NULL)
	{
		return (NULL);
	}

	for (index = 0; index < ac; index++)
	{
		for (j = 0; av[index][j]; j++)
		{
			string[index++] = av[index][j];
		}
		string[index] = '\n';
	}
	string[length]= '\0';
	return (string)
}
