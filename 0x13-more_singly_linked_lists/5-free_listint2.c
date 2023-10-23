#include "lists.h"
/**
 * free_listint2-a function that frees a listint_t list
 * @head: pointer to the pointer to the head of the linked list
 * Return:void
 */
void free_listint2(listint_t **head)
{
	listint_t *present, *temp;

	if (head == NULL || *head == NULL)
		return;
	present = *head;
	while (present != NULL)
	{
		temp = present;
		present = present->next;
		free(temp);
	}
	*head = NULL;
}
