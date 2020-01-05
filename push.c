/**
 * push - push new element to stack
 * @stack: new element to push to stack
 * @line_number: number of line into monty file
 * Return: void
 * Authors - Ivan Dario Lasso - Cohort 10 - Cali
 **/

#include "monty.h"
void push(stack_t **stack, unsigned int line_number)
{
	(void)(line_number);
	if (top == NULL)
	{
		top = *stack;
		return;
	}
	(*stack)->prev = NULL;
	(*stack)->next = top;
	top->prev = *stack;
	top = *stack;

}
