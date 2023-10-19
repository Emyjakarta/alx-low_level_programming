#include "lists.h"
/**
 * free_list- a function that frees a list_t list
 * @head: pointer to the head
 * Return:void
 */
void free_list(list_t *head)
{
	list_t *present;

	while (head != NULL)
	{
		present = head;
		head = head->next;
		free(present->str);
		free(present);
	}
}
