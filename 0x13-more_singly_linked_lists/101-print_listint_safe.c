#include "lists.h"

/**
 * print_listint_safe - function that prints a linked list with a loop safely.
 * @head: pointer to the 1st node of the linked list
 * Return: new_node
 */

size_t print_listint_safe(const listint_t *head)
{
        const listint_t *temp_node = NULL;
        const listint_t *l_n = NULL;
        unsigned int count = 0;
        unsigned new_n;

        temp_node = head;
        while (temp_node)
        {
                printf("[%p] %d\n", (void *)temp_node, temp_node->n);
                count++;
                temp_node = temp_node->next;
                l_n = head;

                for (new_n = 0; new_n < count; new_n++)
                {
                        if (temp_node == l_n)
                        {
                                printf("-> [%p] %d\n", (void *)temp_node, temp_node->n);
                                return (count);
                        }
                        l_n = l_n->next;
                }
                if (!head)
                        exit(98);
        }
        return (count);
}
