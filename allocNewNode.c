/**
 * allocNewNode - alloc new node by right push monty instruction
 * @data: number monty
 * Return: pointer to new monty stack element
 * Author - Ivan Dario Lasso - Cohort 10 - Cali
 **/

#include "monty.h"
stack_t *allocNewNode(char *data)
{
	stack_t *newtop;

	newtop = malloc(sizeof(stack_t));
	if (newtop == NULL)
	{
		return (NULL);
	}
	newtop->n = atoi(data);
	newtop->prev = NULL;
	newtop->next = NULL;
return (newtop);

}
