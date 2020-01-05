/**
 * pop - removes the top element of the stack.
 * @stack: new element to push to stack
 * @line_number: number of line into monty file
 * Return: void
 * Authors - Ivan Dario Lasso - Cohort 10 - Cali
 **/

#include "monty.h"
void pop(stack_t **stack, unsigned int line_number)
{

	stack_t *temp;

	(void)(line_number);

	/* last node*/
	if ((*stack)->next == NULL && (*stack)->prev == NULL)
	{
		temp = top;
		free(temp);
		top = NULL;
		return;
	}

	temp = *stack;
	*stack = (*stack)->next;
	if (*stack != NULL)
		(*stack)->prev = NULL;
	top = *stack;
	free(temp);
}
