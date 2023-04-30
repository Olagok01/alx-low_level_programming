#include "lists.h"

/**
 * get_nodeint_at_index - Locates a given node of
 *	a listint_t linked list.
 * @head: pointer to the head of the listint_t list.
 * @index: index of the node to starting at 0.
 * Return: if the node does not exist - NULL.
 *         Otherwise - the located node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int count;

	for (count = 0, current != NULL && count < index; count++)
	{
		current = current->next;
	}

	if (count == index && current != NULL)
	{
		return (current);
	}
	else
	{
		return (NULL);
	}
}
