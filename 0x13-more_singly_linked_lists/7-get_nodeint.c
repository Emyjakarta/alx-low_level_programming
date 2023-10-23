#include "lists.h"
/**
 * get_nodeint_at_index-a function that returns the
 * nth node of a listint_t linked list
 * @head: pointer to the head of the linked list
 * @index: index of the node, starting at 0
 * Return:nth node of the linked list or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int Q = 0;

	while (head != NULL)
	{
		if (index == Q)
		{
			return (head);
		}
		Q++;
		head = head->next;
	}
	return (NULL);
}
