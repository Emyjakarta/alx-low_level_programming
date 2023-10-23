#include "lists.h"
/**
 * listint_len-a function that returns the number
 * of elements in a linked listint_t list
 * @h: pointer to the head of the linked list
 * Return: number of elements in the linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t Q = 0;

	while (h != NULL)
	{
		h = h->next;
		Q++;
	}
	return (Q);
}
