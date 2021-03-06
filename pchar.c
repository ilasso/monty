/**
 * pchar - prints the char at the top of the stack, followed by a new line.
 * @stack: top of stack
 * @line_number: number of line into monty file
 * Return: void
 * Author - Ivan Dario Lasso - Cohort 10 - Cali
 **/

#include "monty.h"
void pchar(stack_t **stack, unsigned int line_number)
{
	(void) (line_number);
	(void) (stack);
	printf("%c\n", top->n);
}
