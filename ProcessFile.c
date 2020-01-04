#include "monty.h"
void ProcessFile(char *FileName)
{
	FILE *fp;
	char *fileline = NULL;
	char *Orifileline = NULL;
	size_t sizebuf;
	ssize_t Qchar; 
	static int idxLine = 0;
	char **Words;

	(void) (Words);
	(void) (Orifileline);

	fp = fopen(FileName,"r");
	
	if (fp == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n",FileName);
		exit(EXIT_FAILURE);
	}
	while ((Qchar = getline(&fileline,&sizebuf,fp)) != EOF)
	{
		Orifileline = _strdup(fileline);
		idxLine++;
		Words = ParseMontyCmd(fileline,"\n\t ",Qchar);
		/*printf("%d|%s",idxLine,Orifileline);*/

	}
/*		printf("\n\n1=%s\n",Words[0]);
		printf("\n\n2=%s\n",Words[1]);
		printf("\n\n3=%s\n",Words[2]);
		printf("\n\n4=%s\n",Words[3]);
		printf("\n\n5=%s\n",Words[4]);
		printf("\n\n6=%s\n",Words[5]);*/
	free(fileline);
}
