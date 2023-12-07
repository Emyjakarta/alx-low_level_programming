#include "lists.h"
/**
 * delete_dnodeint_at_index-function that deletes the
 * node at index index of a dlistint_t linked list
 * @head: pointer to pointer to the head of the list
 * @index: index of the node to be deleted
 * Return: 1 if successful else -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int q = 0;
	dlistint_t *temp = *head;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}
	while (temp != NULL)
	{
		if (q == index)
		{
			if (temp->next != NULL)
				temp->next->prev = temp->prev;
			temp->prev->next = temp->next;
			free(temp);
			return (1);
		}
		temp = temp->next;
		q++;
	}
	return (-1);
}
