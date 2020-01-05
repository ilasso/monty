/**
 * swap - swaps the top two elements of the stack
 * @stack: new element to push to stack
 * @line_number: number of line into monty file
 * Return: void
 * Authors - Ivan Dario Lasso - Cohort 10 - Cali
 **/

#include "monty.h"
void swap(stack_t **stack, unsigned int line_number)
{

	stack_t *Top;
	stack_t *prev;

	(void)(line_number);

	if (top == NULL)
	{
		top = *stack;
		return;
	}

	Top = top;
	prev = top->next;
	top->prev = prev;
	top->next = prev->next;
	prev->prev = NULL;
	prev->next = Top;
	top = prev;
}
