#include "lists.h"
/**
 * insert_nodeint_at_index-a function that inserts a
 * new node at a given position
 * @idx: is the index of the list where
 * the new node should be added. Index starts at 0
 * @head: pointer to the pointer to the head of the linked list
 * @n: value to be inserted in the new node
 * Return: the address of the new node, or NULL if it failed
 * if it is not possible to add the new node at
 * index idx, do not add the new node and return NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *present, *former, *recent_node;
	unsigned int Q;

	if (head == NULL)
		return (NULL);
	recent_node = malloc(sizeof(listint_t));
	if (recent_node == NULL)
		return (NULL);
	recent_node->n = n;
	recent_node->next = NULL;
	if (idx == 0)
	{
		recent_node->next = *head;
		*head = recent_node;
		return (recent_node);
	}
	present = *head;
	former = NULL;
	Q = 0;

	while (idx > Q)
	{
		if (present == NULL)
		{
			free(recent_node);
			return (NULL);
		}
		former = present;
		present = present->next;
		Q++;
	}
	recent_node->next = present;
	former->next = recent_node;
	return (recent_node);
}
