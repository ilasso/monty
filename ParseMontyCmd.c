#include "monty.h"
/**
 * ParseMontyCmd - take and evaluate the arguments
 * @line: monty instruction to parse
 * @separator: separator to parse
 * @Qchar: Quantity char to alloc
 * Return: Return monty instruct parsed
 * Author - Ivan Dario Lasso - Cohort 10 - Cali
 **/

char **ParseMontyCmd(char *line, char *separator, ssize_t Qchar)
{
	unsigned int i = 0;
	char **param;
	char *s;

	param = malloc(sizeof(char **) * Qchar);

	if (param == NULL)
	{
		free(line);
		return (NULL);
	}
	s = strtok(line, separator);
	param[i] = s;
	i++;
	while ((s = strtok(NULL, separator)))
	{
		param[i] = s;
		i++;
	}

	param[i] = NULL;

	return (param);
}
