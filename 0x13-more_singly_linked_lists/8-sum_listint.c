#include "lists.h"

/**
 * sum_listint - Calculates the sum of all the
 *	data (n) of a listint_t list.
 * @head: pointer to the head of the listint_t list.
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	listint_t *current = head;
	int sum = 0;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
