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
			default:
				return;

		}
		free(fileline);
		free(Words);
		freeStack();
		fclose(fp);
		exit(EXIT_FAILURE);

}
