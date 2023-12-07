#include "lists.h"
/**
 * insert_dnodeint_at_index-function that
 * inserts a new node at a given position
 * @h: pointer to the pointer to the head of the list
 * @idx: index of list where new node will be added
 * @n: new node to be added
 * Return: address of new node or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int q = 0;
	dlistint_t *recent = malloc(sizeof(dlistint_t));
	dlistint_t *temp = *h;

	if (recent == NULL)
		return (NULL);
	recent->n = n;
	if (idx == 0)
	{
		recent->prev = NULL;
		recent->next = *h;
		if (*h != NULL)
			(*h)->prev = recent;
		*h = recent;
		return (recent);
	}
	while (temp != NULL)
	{
		if (q == idx - 1)
		{
			recent->prev = temp;
			recent->next = temp->next;
			if (temp->next != NULL)
				temp->next->prev = recent;
			temp->next = recent;
			return (recent);
		}
		temp = temp->next;
		q++;
	}
	free(recent);
	return (NULL);
}
