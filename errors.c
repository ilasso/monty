/**
 * errors - display error an exit
 * @errn: error code 1 bad alloc, 2 bad instr 3 bad push, 4 bad pint
 *		5 bad pop, 6 bad swap
 * @Words: monty instruction parsed
 * @ln: number line into monty file
 * @fileline: line monty file readed
 * @fp: stream monty FILE
 * Return: void
 * Author - Ivan Dario Lasso - Cohort 10 - Cali
 **/
#include "monty.h"

void errors(int errn, char **Words, unsigned int ln, char *fileline, FILE *fp)
{
		if (Words == NULL)
		{ fprintf(stderr, BAD_ALLOC);
			free(fileline);
			freeStack();
			exit(EXIT_FAILURE);
		}
		switch (errn)
		{
			case 1:
				fprintf(stderr, BAD_ALLOC);
				break;
			case 2:
				fprintf(stderr, BAD_INSTR, ln, Words[0]);
				break;
			case 3:
				fprintf(stderr, BAD_PUSH, ln);
				break;
			case 4:
				fprintf(stderr, BAD_PINT, ln);
				break;
			case 5:
				fprintf(stderr, BAD_POP, ln);
				break;
			case 6:
				fprintf(stderr, BAD_SWAP, ln);
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
void errors2(int err, char **Words, unsigned int ln, char *fileline, FILE *fp);
/**
 * errors2 - display error an exit
 * @err: 7 bad add 8 bad sub 9 bad mul 10 ban div
 * @Words: monty instruction parsed
 * @ln: number line into monty file
 * @fileline: line monty file readed
 * @fp: stream monty FILE
 * Return: void
 * Author - Ivan Dario Lasso - Cohort 10 - Cali
 **/
void errors2(int err, char **Words, unsigned int ln, char *fileline, FILE *fp)
{
		if (Words == NULL)
		{ fprintf(stderr, BAD_ALLOC);
			free(fileline);
			freeStack();
			exit(EXIT_FAILURE);
		}
		switch (err)
		{
			case 7:
				fprintf(stderr, BAD_ADD, ln);
				break;
			case 8:
				fprintf(stderr, BAD_SUB, ln);
				break;
			case 9:
				fprintf(stderr, BAD_MUL, ln);
				break;
			case 10:
				fprintf(stderr, BAD_DIV, ln);
				break;
			case 11:
				fprintf(stderr, BAD_DIV0, ln);
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
