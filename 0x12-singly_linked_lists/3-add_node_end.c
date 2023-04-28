#include "lists.h"

/**
 * _strlen - returns the length of a string
 * @str: string parameter
 * Return: length of string
 */
int _strlen(const char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
	}
	return (i);
}

/**
 * add_node_end - adds a new node to end of linked list
 * @head: pointer to pointer to linked list
 * @str: used to set the str attribute of the new node
 * Return: address of linked list of NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp_node;
	unsigned int length;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	length = _strlen(str);
	temp_node = *head;

	new->str = strdup(str);
	new->len = length;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}

	while (temp_node->next != NULL)
	{
		temp_node = temp_node->next;
	}
	temp_node->next = new;
	return (*head);
}
