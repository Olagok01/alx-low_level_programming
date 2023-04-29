#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node
 *	at the end of a listint_t list.
 * @head: pointer to pointer to linked list
 * @n: integer
 * Return: address of linked list of NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *temp_node;

	new_node = malloc(sizeof(listsint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	temp_node = *head;

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}
	while (temp_node != NULL)
	{
		temp_node = tem_node->next;
	}
	temp_node->next = new_node;
	return (*head);
}

