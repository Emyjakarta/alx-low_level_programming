#include "lists.h"
/**
 * pop_listint-a function that deletes the head node of a
 * listint_t linked list, and returns the head node’s data (n)
 * if the linked list is empty return 0
 * @head: pointer to a pointer to the head of the linked list
 * Return:head node's data (n) or 0 if empty
 */
int pop_listint(listint_t **head)
{	listint_t *temp;
	int store_data;

	if (*head == NULL)
	{
		return (0);
	}
	temp = *head;
	store_data = temp->n;
	*head = (*head)->next;
	free(temp);
	return (store_data);
}
