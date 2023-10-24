#include "lists.h"
/**
 * free_listint_safe-a function that frees a listint_t list
 * This function can free lists with a loop
 * @h: pointer to the pointer to the header of the linked list
 * You should go though the list only once
 * Return: the size of the list that was free’d
 * The function sets the head to NULL
 */
size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	listint_t *present, *temp;

	if (h == NULL || *h == NULL)
		return (0);
	present = *h;
	while (present != NULL)
	{
		size++;
		temp = present;
		present = present->next;
		free(temp);
		if (temp <= present)
		{
			*h = NULL;
			break;
		}
	}
	*h = NULL;
	return (size);
}
