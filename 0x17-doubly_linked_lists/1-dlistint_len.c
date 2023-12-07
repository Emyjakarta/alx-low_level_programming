#include "lists.h"
/**
 * dlistint_len-function that returns the
 * number of elements in a linked dlistint_t list
 * @h: pointer to the head of the linked list
 * Return: number of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t q = 0;

	while (h != NULL)
	{
		q++;
		h = h->next;
	}
	return (q);
}

