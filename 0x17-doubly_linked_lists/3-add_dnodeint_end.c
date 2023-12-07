#include "lists.h"
/**
 * add_dnodeint_end-function that adds a new node
 * at the end of a dlistint_t list
 * @head: pointer to the pointer to the head
 * @n: node to be added
 * Return: address of the new node or NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *recent = malloc(sizeof(dlistint_t));
	dlistint_t *temp = *head;

	if (recent == NULL)
		return (NULL);
	recent->n = n;
	recent->next = NULL;
	if (*head == NULL)
	{
		recent->prev = NULL;
		*head = recent;
		return (recent);
	}
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = recent;
	recent->prev = temp;
	return (recent);
}
