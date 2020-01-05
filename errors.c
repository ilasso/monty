/**
 * errors - display error an exit
 * @errorcode: error code 1 bad alloc, 2 bad instr 3 bad push, 4 bad pint
 * @Words: monty instruction parsed
 * @linenumber: number line into monty file
 * @fileline: line monty file readed
 * @fp: stream monty FILE
 * Return: void
 * Authors - Ivan Dario Lasso - Cohort 10 - Cali
 **/

#include "monty.h"
void errors(int errorcode, char **Words, unsigned int linenumber,
char *fileline, FILE *fp)
{
		if (Words == NULL)
		{
			fprintf(stderr, BAD_ALLOC);
			free(fileline);
			freeStack();
			exit(EXIT_FAILURE);
		}

		switch (errorcode)
		{
			case 1:
				fprintf(stderr, BAD_ALLOC);
				break;
			case 2:
				fprintf(stderr, BAD_INSTR, linenumber, Words[0]);
				break;
			case 3:
				fprintf(stderr, BAD_PUSH, linenumber);
				break;
			case 4:
				fprintf(stderr, BAD_PINT, linenumber);
				break;
			case 5:
				fprintf(stderr, BAD_POP, linenumber);
				break;
			case 6:
				fprintf(stderr, BAD_SWAP, linenumber);
				break;
			default:
				return;

		}
		free(fileline);
		free(Words);
		freeStack();
		fclose(fp);
		exit(EXIT_FAILURE);

}
