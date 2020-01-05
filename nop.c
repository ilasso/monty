/**
 * nop - doesn’t do anything.
 * @stack: top of stack
 * @line_number: number of line into monty file
 * Return: void
 * Author - Ivan Dario Lasso - Cohort 10 - Cali
 **/

#include "monty.h"
void nop(stack_t **stack, unsigned int line_number)
{
	(void) (line_number);
	(void) (stack);
}
