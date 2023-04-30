#include "lists.h"

/**
 * free_listint - function that frees a listint_t list.
 * @head: pointer to the head of the list
 */

void free_listint(listint_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		free(temp->n);
		free(temp);
		head = head->next;
	}
}
