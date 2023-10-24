#include "lists.h"
/**
 * reverse_listint-a function that reverses
 * a listint_t linked list
 * @head: pointer to the pointer to the head of the linked list
 * Return: a pointer to the first node of the reversed list
 * You are not allowed to use more than 1 loop.
 * You are not allowed to use malloc, free or arrays
 * You can only declare a maximum of two variables in your function
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *former = NULL, *next;
	listint_t *present = *head;

	while (present != NULL)
	{
		next = present->next;

		present->next = former;
		former = present;
		present = next;
	}
	*head = former;
	return (former);
}
