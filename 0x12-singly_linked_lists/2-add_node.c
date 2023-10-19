#include "lists.h"
/**
 * add_node-a function that adds a new node at
 * the beginning of a list_t list
 * @head: pointer to a pointer in the list_t structure
 * used to modify the head of the linked list
 * @str: pointer to the constant character string to
 * be duplicated and stored in the new node
 * Return:Address of the new element/NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *RecentNode;

	if (str == NULL)
		return (NULL);
	RecentNode = malloc(sizeof(list_t));
	if (RecentNode == NULL)
		return (NULL);
	RecentNode->str = strdup(str);
	if (RecentNode->str == NULL)
	{
		free(RecentNode);
		return (NULL);
	}
	RecentNode->len = strlen(RecentNode->str);
	RecentNode->next = *head;
	*head = RecentNode;
	return (RecentNode);
}

