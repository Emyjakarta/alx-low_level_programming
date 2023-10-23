#include "lists.h"
/**
 * add_nodeint_end-a function that adds a new
 * node at the end of a listint_t list
 * @head: pointer to a pointer to the head of the list
 * @n: pointer to the integer to be duplicated in the new node
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *RecentNode, *PresentNode;

	RecentNode = malloc(sizeof(listint_t));
	if (RecentNode == NULL)
	{
		return (NULL);
	}
	RecentNode->n = n;
	RecentNode->next = NULL;
	if (*head == NULL)
		*head = RecentNode;
	else
	{
		PresentNode = *head;
		while (PresentNode->next != NULL)
		{
			PresentNode = PresentNode->next;
		}
		PresentNode->next = RecentNode;
	}
	return (RecentNode);
}
