#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list to search for
 * Return: address of the node where the loop starts, or NULL
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *old = head, *new = head;

	if (!head)
	{
		return (NULL);
	}

	while (old && new && new->next)
	{
		new = new->next->next;
		old = old->next;
		if (new == old)
		{
			old = head;
			while (old != new)
			{
				old = old->next;
				new = new->next;
			}
			return (new);
		}
	}

	return (NULL);
}
