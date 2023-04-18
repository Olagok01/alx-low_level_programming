#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - find length of string
 * @str: string
 * Return: length
 */
int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
	}
	return (i);
}

/**
 * _strcpy - copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest
 * @dest: copy source to this buffer
 * @src: this is the source to copy
 * Return: copy of original source
 */

char *_strcpy(char *dest, char *src)
{
	int index = 0;

	while (src[index])
	{
		dest[index] = src[index];
		index++;

	}
	dest[index] = '\0';

	return (dest);
}

/**
 * new_dog - create new instance of struct dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: Success, else NULL otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog_new;

	dog_new = malloc(sizeof(dog_t));
	if (dog_new == NULL)
		return (NULL);

	dog_new->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (dog_new->name == NULL)
	{
		free(dog_new);
		return (NULL);
	}

	dog_new->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (dog_new->owner == NULL)
	{
		free(dog_new);
		free(dog_new->name);
		return (NULL);
	}

	_strcpy(dog_new->name, name);
	_strcpy(dog_new->owner, owner);
	dog_new->age = age;

	return (dog_new);
}
