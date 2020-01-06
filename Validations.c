/**
 * Validations - Monty instruction validations
 * @Words: monty instruction to parsed
 * Return: Return 3 bad push integer
 * Author - Ivan Dario Lasso - Cohort 10 - Cali
 **/
int Validations2(char **Words);

#include "monty.h"
int Validations(char **Words)
{
	char *s;
	int i;
	int val2 = 0;

	if (strcmp(Words[0], "push") == 0)
	{
		if (Words[1] == NULL)
			return (3);
		s = Words[1];
		for (i = 0; s[i] != '\0'; i++)
		{
			if (s[0] == '-')
				continue;
			if (isdigit(s[i]) == 0)
				return (3);
		}
	}
	if (strcmp(Words[0], "pint") == 0)
	{
		if (top == NULL)
			return (4);
	}
	if (strcmp(Words[0], "pop") == 0)
	{
		if (top == NULL)
			return (5);
	}
	if (strcmp(Words[0], "swap") == 0)
	{
		if (top == NULL || top->next == NULL)
			return (6);
	}
	val2 = Validations2(Words);

	if (val2)
		return (val2);

	if (strcmp(Words[0], "nop") == 0)
		return (99);
return (0);
}
/**
 * Validations2 - Monty instruction validations
 * @Words: monty instruction to parsed
 * Return: Return 3 bad push integer
 * Author - Ivan Dario Lasso - Cohort 10 - Cali
 **/

int Validations2(char **Words)
{
	if (strcmp(Words[0], "add") == 0)
	{
		if (top == NULL || top->next == NULL)
			return (7);
	}
	if (strcmp(Words[0], "sub") == 0)
	{
		if (top == NULL || top->next == NULL)
			return (8);
	}
	if (strcmp(Words[0], "mul") == 0)
	{
		if (top == NULL || top->next == NULL)
			return (9);
	}
	if (strcmp(Words[0], "div") == 0)
	{
		if (top == NULL || top->next == NULL)
			return (10);
		if (top->n == 0)
			return (11);
	}
	if (strcmp(Words[0], "mod") == 0)
	{
		if (top == NULL || top->next == NULL)
			return (12);
		if (top->n == 0)
			return (11);
	}
return (0);
}
