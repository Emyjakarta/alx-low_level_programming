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
	const listint_t *tortoise, *hare, *begin_loop;
	size_t Q = 0;

	tortoise = head;
	hare = head;
	while (hare != NULL && hare->next != NULL)
	{
		tortoise = tortoise->next;
		hare = hare->next;
		if (tortoise == hare)
			break;
	}
	if (hare == NULL || hare->next == NULL)
	{
		tortoise = head;
		while (tortoise != NULL)
		{
			printf("[%p] %d\n", (void *)tortoise, tortoise->n);
			Q++;
			tortoise = tortoise->next;
		}
	}
	else
	{
		tortoise = head;
		begin_loop = hare;
		while (tortoise != begin_loop)
		{
			printf("[%p] %d\n", (void *)tortoise, tortoise->n);
			Q++;
			tortoise = tortoise->next;
		}
		do
		{
			printf("[%p] %d\n", (void *)tortoise,tortoise->n);
			Q++;
			tortoise = tortoise->next;
		} while (tortoise != begin_loop);
		printf("-> [%p] %d\n", (void *)begin_loop, begin_loop->n);
		Q++;
	}
	return (Q);
}
