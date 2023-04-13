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
	int index, j, i;
	char *string;
	int length = ac;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			length++;
		}
	}

	string = malloc(sizeof(char) * length + 1);

	if (string == NULL)
	{
		return (NULL);
	}

	index = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			string[index++] = av[i][j];
		}
		string[index++] = '\n';
	}
	string[length] = '\0';
	return (string);
}
