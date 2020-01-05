/**
 * pall - print stack
 * @stack: top of stack
 * @line_number: number of line into monty file
 * Return: void
 * Authors - Ivan Dario Lasso - Cohort 10 - Cali
 **/

#include "monty.h"
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;
	(void) (line_number);

	temp = *stack;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}

}
