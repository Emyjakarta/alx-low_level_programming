#include "lists.h"
/**
 * print_list-a function that prints all the elements of a list_t list.
 * @h: pointer to the head of the linked list
 * Return: the number of nodes
 * If str is NULL, print [0] (nil)
 * You are allowed to use printf
 */
size_t print_list(const list_t *h)
{
	size_t Q = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		Q++;
	}
	return (Q);
}
