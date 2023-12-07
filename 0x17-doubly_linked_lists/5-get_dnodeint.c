#include "lists.h"
/**
 * get_dnodeint_at_index-returns the nth node
 * of a dlistint_t linked list
 * head: pointer to the head of the list
 * @index: index of node
 * Return: nth node or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int q = 0;

	while (head != NULL)
	{
		if (q == index)
			return (head);
		head = head->next;
		q++;
	}
	return (NULL);
}
