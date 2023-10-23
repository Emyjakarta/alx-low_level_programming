#include "lists.h"
/**
 * print_listint-a function that prints all the
 * elements of a listint_t list
 * @h: pointer to the head of listint_t
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t Q = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		Q++;
	}
	return (Q);
}
