#include "monty.h"
/**
 * f_mul - multiplies the second top two elements of the stack.
 * @head: first node
 * @counter: int
 * Return: nothing
*/
void f_mul(stack_t **head, unsigned int counter)
{
	stack_t *p;
	int len = 0, temp;

	p = *head;
	while (p)
	{
		p = p->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	p = *head;
	temp = p->next->n * p->n;
	p->next->n = temp;
	*head = p->next;
	free(p);
}
