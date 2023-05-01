#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t list safely
 * @h: A pointer to the address of
 *	the head of the listint_t list.
 * Return: The size of the list that was freed.
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *current_node, *temp_node;
	unsigned int size = 0;

	if (h == NULL || *h == NULL)
	{
		return (0);
	}
	current_node = *h;
	while (current_node != NULL)
	{
		temp_node = current_node;
		current_node = current_node->next;
		size++;
		free(temp_node);
		if (temp_node <= current_node)
		{
			break;
		}
	}
	*h = NULL;
	return (size);
}
