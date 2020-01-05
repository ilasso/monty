/**
 * Validations - Monty instruction validations
 * @Words: monty instruction to parsed
 * Return: Return 3 bad push integer
 * Author - Ivan Dario Lasso - Cohort 10 - Cali
 **/

#include "monty.h"
int Validations(char **Words)
{
	char *s;
	int i;

	if (strcmp(Words[0], "push") == 0)
	{
		if (Words[1] == NULL)
		{
			return (3);
		}
		s = Words[1];
		for (i = 0; s[i] != '\0'; i++)
		{
			if (s[0] == '-')
				continue;
			if (isdigit(s[i]) == 0)
			{
				return (3);
			}
		}
	}

return (0);
}
