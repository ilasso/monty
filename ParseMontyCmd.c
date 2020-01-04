#include "monty.h"
/**
 * ParseMontyCmd - take and evaluate the arguments
 * @command: take a command
 * @separator: take a blank space of arguments
 * Return: Return a param
 * Authors - Carlos Garcia - Ivan Dario Lasso - Cohort 10 - Cali
 **/

char **ParseMontyCmd(char *line, char *separator,ssize_t Qchar)
{
	unsigned int i = 0;
	char **param;
	char *s;

	param = malloc(sizeof(char **) * Qchar);

	if (param == NULL)
	{
		return (NULL);
	}
	s = strtok(line, separator);
	param[i] = s;
	printf("%d-%s\n",i,s);
	i++;
	while ((s = strtok(NULL, separator)))
	{
		printf("%d-%s\n",i,s);
		param[i] = s;
		i++;
	}

	param[i] = NULL;

	return (param);
}
