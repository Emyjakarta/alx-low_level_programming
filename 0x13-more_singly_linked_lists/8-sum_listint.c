#include "lists.h"
/**
 * sum_listint-a function that returns the sum of all
 * the data (n) of a listint_t linked list
 * @head: pointer to the head of the linked list
 * Return:sum of all the data (n) of the linked list
 */
int sum_listint(listint_t *head)
{
	int add = 0;

	while (head != NULL)
	{
		add += head->n;
		head = head->next;
	}
	return (add);
}
