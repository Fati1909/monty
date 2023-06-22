#include "monty.h"
/**
  *f_sub- substracts the top element of the stack
  *@head: first node
  *@counter: int
  *Return: nothing
 */
void f_sub(stack_t **head, unsigned int counter)
{
	stack_t *temp;
	int sus, nodes;

	temp = *head;
	for (nodes = 0; temp != NULL; nodes++)
		temp = temp->next;
	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	temp = *head;
	sus = temp->next->n - temp->n;
	temp->next->n = sus;
	*head = temp->next;
	free(temp);
}
