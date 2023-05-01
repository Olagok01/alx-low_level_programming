#include "lists.h"

/**
 * print_listint_safe - function that prints a linked list with a loop safely.
 * @head: pointer to the 1st node of the linked list
 * Return: new_node
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *temp_node = NULL;
	const listint_t *current_node = NULL;
	unsigned int count = 0;
	unsigned int nodes;

	temp_node = head;

	while (temp_node)
	{
		printf("[%p] %d\n", (void *)temp_node, temp_node->n);
		count++;
		temp_node = temp_node->next;
		current_node = head;
		for (nodes = 0; nodes < count; nodes++)
		{
			if (temp_node == current_node)
			{
				printf("-> [%p] %d\n", (void *)temp_node, temp_node->n);
				return (count);
			}
			current_node = current_node->next;
		}
		if (!head)
		{
			exit(98);
		}
	}
	return (count);
}
