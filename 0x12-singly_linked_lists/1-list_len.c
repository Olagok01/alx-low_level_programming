#include "lists.h"

/**
 * list_len - the lenght of the list
 * @h: points to node
 * Return: number of nodes
 */

size_t list_len(const list_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
