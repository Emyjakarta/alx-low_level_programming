#include "lists.h"
/**
 * print_listint_safe-a function that prints
 * a listint_t linked list
 * @head: pointer to the head of the linked list
 * Return: the number of nodes in the list
 * This function can print lists with a loop
 * You should go through the list only once
 * If the function fails, exit the program with status 98
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *present, *begin_loop = NULL;
	size_t Q = 0;

	present = head;
	while (present)
	{
		printf("[%p] %d\n", present, present->n);
		Q++;
	}
	if (present > present->next)
	{
		begin_loop = present;
		break;
	}
	present = present->next;
	if (begin_loop)
	{
		present = head;
		while (present != begin_loop)
		{
			printf("[%p] %d\n", present, present->n);
			Q++;
			present = present->next;
		}
		printf("[%p] %d\n", present, present->n);
		Q++;
		printf("-> [%p] %d\n", begin_loop, begin_loop->n);
		Q++;
	}
	return (Q);
}
