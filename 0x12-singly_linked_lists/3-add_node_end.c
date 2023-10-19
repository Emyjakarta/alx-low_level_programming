#include "lists.h"
/**
 * add_node_end-add node at the end of a list_t list
 * @head: pointer to a pointer to the head of the list
 * @str: string to be duplicated and stored in the new node
 * Return:address of the new element/NULL if it fails
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *RecentNode, *Present;

	RecentNode = malloc(sizeof(list_t));
	if (RecentNode == NULL)
		return (NULL);
	RecentNode->str = strdup(str);
	if (RecentNode->str == NULL)
	{
		free(RecentNode);
		return (NULL);
	}
	RecentNode->len = strlen(str);
	RecentNode->next = NULL;

	if (*head == NULL)
	{
		*head = RecentNode;
	}
	else
	{
		Present = *head;
		while (Present->next != NULL)
			Present = Present->next;
		Present->next = RecentNode;
	}
	return (RecentNode);
}
