#include "lists.h"
/**
 * add_dnodeint-function that adds a new
 * node at the beginning of a dlistint_t list
 * @head: pointer to the pointer to the head of the list
 * @n: node to be added
 * Return: address of the new element or NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *recent = malloc(sizeof(dlistint_t));

	if (recent == NULL)
		return (NULL);
	recent->n = n;
	recent->prev = NULL;
	recent->next = *head;
	if (*head != NULL)
		(*head)->prev = recent;
	*head = recent;
	return (recent);
}
