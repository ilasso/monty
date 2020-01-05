/**
 * mul - multiplies the second top element of the stack with the
 *	 top element of the stack.
 * @stack: new element to push to stack
 * @line_number: number of line into monty file
 * Return: void
 * Author - Ivan Dario Lasso - Cohort 10 - Cali
 **/

#include "monty.h"
void mul(stack_t **stack, unsigned int line_number)
{

	stack_t *Top;
	stack_t *prev;
	int sub;

	(void)(line_number);


	if (top == NULL)
	{
		top = *stack;
		return;
	}

	Top = top;
	prev = top->next;

	sub = prev->n * (*stack)->n;
	top = prev;
	top->n = sub;
	free(Top);
}
