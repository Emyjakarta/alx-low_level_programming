#include "lists.h"
/**
 * sum_dlistint-function that returns the sum
 * of all the data (n) of a dlistint_t linked list
 * @head: pointer to the head of the list
 * Return: sum of all data
 */
int sum_dlistint(dlistint_t *head)
{
	int add = 0;

	while (head != NULL)
	{
		add += head->n;
		head = head->next;
	}
	return (add);
}
