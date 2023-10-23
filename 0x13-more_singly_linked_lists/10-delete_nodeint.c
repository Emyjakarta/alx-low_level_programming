#include "lists.h"
/**
 * delete_nodeint_at_index-a function that deletes the
 * node at index index of a listint_t linked list.
 * @head: pointer to the pointer to the head of the linked list
 * @index: is the index of the node that
 * should be deleted. Index starts at 0
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *present, *former;
	unsigned int Q = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	present = *head;
	former = NULL;
	while (index > Q && present != NULL)
	{
		former = present;
		present = present->next;
		Q++;
	}
	if (index > Q || present == NULL)
		return (-1);
	if (former == NULL)
		*head = present->next;
	else
		former->next = present->next;
	free(present);
	return (1);
}
