/**
 * add - adds the top two elements of the stack.
 * @stack: new element to push to stack
 * @line_number: number of line into monty file
 * Return: void
 * Author - Ivan Dario Lasso - Cohort 10 - Cali
 **/

#include "monty.h"
void add(stack_t **stack, unsigned int line_number)
{

	stack_t *Top;
	stack_t *prev;
	int sum;

	(void)(line_number);


	if (top == NULL)
	{
		top = *stack;
		return;
	}

	Top = top;
	prev = top->next;

	sum = (*stack)->n + prev->n;
	top = prev;
	top->n = sum;
	free(Top);
}
