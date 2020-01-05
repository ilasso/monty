/**
 * ProcessFile- read and process monty file
 * @FileName: Name of file to process
 * Return: void
 * Author - Ivan Dario Lasso - Cohort 10 - Cali
 **/
#include "monty.h"
void ProcessFile(char *FileName)
{
	FILE *fp;
	char *fileline = NULL;
	size_t sizebuf;
	ssize_t Qchar;
	int idxLine = 0;
	char **Words;
	int statExe = 0;

	fp = fopen(FileName, "r");

	if (fp == NULL || (access(FileName, R_OK) == -1))
	{
		fprintf(stderr, BAD_FILE, FileName);
		exit(EXIT_FAILURE);
	}
	while ((Qchar = getline(&fileline, &sizebuf, fp)) != EOF)
	{
		idxLine++;

		Words = ParseMontyCmd(fileline, "\n\t ", Qchar);

		if (Words[0] == NULL || (strcmp(Words[0], "nop") == 0))
		{
			free(Words);
			free(fileline);
			fileline = NULL;
			continue;
		}
		statExe = ExecInstruction(Words, idxLine);
		errors(statExe, Words, idxLine, fileline, fp);
		errors2(statExe, Words, idxLine, fileline, fp);
		free(fileline);
		fileline = NULL;
		free(Words);
	}
	fclose(fp);
	free(fileline);
	freeStack();
}
