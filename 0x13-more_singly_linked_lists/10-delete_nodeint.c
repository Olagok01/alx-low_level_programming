#include "lists.h"

/**
 * delete_nodeint_at_index - delete a node at a given position
 * @head: pointer to head pointer of linked list
 * @index: index to delete node
 * Return: 1 if succeeded, or -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev, *current = *head;
	unsigned int count = 0;

	if (current == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}

	while (count < (index - 1))
	{
		if (current->next == NULL)
		{
			return (-1);
		}

		current = current->next;
		count++;
	}

	prev = current->next;
	current->next = prev->next;
	free(prev);
	return (1);
}
