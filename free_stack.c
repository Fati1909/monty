#include "monty.h"

/**
 * free_stack - function that free a doubly linked list
 * @head: first node
 */

void free_stack(stack_t *head)
{
	stack_t *temp;

	temp = head;
	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
