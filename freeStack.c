/**
 * freeStack - free stack
 * Return: void
 * Author - Ivan Dario Lasso - Cohort 10 - Cali
 **/

#include "monty.h"
void freeStack(void)
{
	stack_t *temp;

	if (top == NULL)
		return;

	while (top != NULL)
	{
		temp = top;
		top = top->next;
		free(temp);
	}
}
