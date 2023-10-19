#include "lists.h"
/**
 * list_len-a function that returns the number of
 * elements in a linked list_t list
 * @h: pointer to the head of the linked list
 * Return:the number of elements in the linked list
 */
size_t list_len(const list_t *h)
{
	size_t Q = 0;

	while (h != NULL)
	{
		Q++;
		h = h->next;
	}
	return (Q);
}
