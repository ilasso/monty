/**
 * ExecInstruction - Analize and executa monty instruction
 * @Words: Parsed Monty Instruction
 * @linenumber: number line into file
 * Return: 3 bad push integer, 2 bad instr, 1 bad alloc, 0 succed
 * Author - Ivan Dario Lasso - Cohort 10 - Cali
 **/

#include "monty.h"
int ExecInstruction(char **Words, unsigned int linenumber)
{
	stack_t *newtop;
	instruction_t opcode[] = {
					{"push", push},
					{"pall", pall},
					{"pint", pint},
					{NULL, NULL}
				};
	int i;
	int foundInstr = 0;
	int valStatus = 0;

	(void)(newtop);

	valStatus = Validations(Words);

	if (valStatus)
		return (valStatus);

	for (i = 0; opcode[i].opcode != NULL; i++)
	{
		if (strcmp(Words[0], opcode[i].opcode) == 0)
		{
			foundInstr = 1;
			if (strcmp(opcode[i].opcode, "push") == 0)
			{
				newtop = allocNewNode(Words[1]);
				if (newtop == NULL)
					return (1);
				opcode[i].f(&newtop, linenumber);
			}
			else
				opcode[i].f(&top, linenumber);
		}
	}

	if (!foundInstr)
	{
		return (2);
	}
return (0);
}
