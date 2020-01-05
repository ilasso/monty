#include "monty.h"
stack_t *top = NULL;
/**
 * main - monty 0.98 interprete
 * @argc: Number of Arguments
 * @argv: Array of arguments
 * Return: Return 0
 * Author - Ivan Dario Lasso - Cohort 10 - Cali
 **/

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		fprintf(stderr, BAD_ARGUMENTS);
		return (EXIT_FAILURE);
	}

	ProcessFile(argv[1]);
return (0);
}
