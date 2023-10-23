#include "lists.h"
/**
 * free_listint- a function that frees a listint_t list
 * @head: pointer to the head of the linked list
 * Return:void
 */
void free_listint(listint_t *head)
{
	listint_t *present;

	while (head != NULL)
	{
		present = head;
		head = head->next;
		free(present);
	}
}
