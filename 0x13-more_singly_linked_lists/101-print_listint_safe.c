#include "lists.h"
/**
 * free_listptr-free linked list
 * @head: pointer to the pointer to the head of the linked list
 * Return:void
 */
void free_listptr(listptr_t **head)
{
	listptr_t *temp, *present;

	if (head != NULL)
	{
		present = *head;
		while ((temp = present) != NULL)
		{
			present = present->next;
			free(temp);
		}
		*head = NULL;
	}
}
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
	listptr_t *slow_ptr, *fast_ptr, *begin_loop;
	size_t Q = 0;

	slow_ptr = NULL;
	while (head != NULL)
	{
		fast_ptr = malloc(sizeof(listptr_t));
		if (fast_ptr == NULL)
			exit(98);
		fast_ptr->ptr = (void *)head;
		fast_ptr->next = slow_ptr;
		slow_ptr = fast_ptr;
		begin_loop = slow_ptr;
		while (begin_loop->next != NULL)
		{
			begin_loop = begin_loop->next;
			if (head == begin_loop->ptr)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listptr(&slow_ptr);
				return (Q);
			}
		}
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		Q++;
	}
	free_listptr(&slow_ptr);
	return (Q);
}
