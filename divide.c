/**
 * divide - divides the second top element of the stack by the
 *	 top element of the stack.
 * @stack: new element to push to stack
 * @line_number: number of line into monty file
 * Return: void
 * Author - Ivan Dario Lasso - Cohort 10 - Cali
 **/

#include "monty.h"
void divide(stack_t **stack, unsigned int line_number)
{

	stack_t *Top;
	stack_t *prev;
	int div;

	(void)(line_number);


	if (top == NULL)
	{
		top = *stack;
		return;
	}

	Top = top;
	prev = top->next;

	div = prev->n / (*stack)->n;
	top = prev;
	top->n = div;
	free(Top);
}
