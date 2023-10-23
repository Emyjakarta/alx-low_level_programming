#include "lists.h"
/**
 * add_nodeint-a function that adds a new node
 * at the beginning of a listint_t list
 * @head: pointer to the pointer to the head of the linked list
 * @n: pointer to the integer to be duplicated in the new node
 * Return:the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *RecentNode;

	RecentNode = malloc(sizeof(listint_t));
	if (RecentNode == NULL)
		return (NULL);
	RecentNode->n = n;
	RecentNode->next = *head;
	*head = RecentNode;
	return (RecentNode);
}
