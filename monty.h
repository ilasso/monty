#ifndef MONTY
#define MONTY
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <ctype.h>
#define BAD_ARGUMENTS "USAGE: monty file\n"
#define BAD_FILE "Error: Can't open file %s\n"
#define BAD_ALLOC "Error: malloc failed\n"
#define BAD_INSTR "L%d: unknown instruction %s\n"
#define BAD_PUSH "L%d: usage: push integer\n"
#define BAD_PINT "L%d: can't pint, stack empty\n"
#define BAD_POP "L%d: can't pop an empty stack\n"
#define BAD_SWAP "L%d: can't swap, stack too short\n"
#define BAD_ADD "L%d: can't add, stack too short\n"
#define BAD_SUB "L%d: can't sub, stack too short\n"
#define BAD_MUL "L%d: can't mul, stack too short\n"
#define BAD_DIV "L%d: can't div, stack too short\n"
#define BAD_DIV0 "L%d: division by zero\n"
#define BAD_MOD "L%d: can't mod, stack too short\n"
#define BAD_PCHAR13 "L%d: can't pchar, value out of range\n"
#define BAD_PCHAR14  "L%d: can't pchar, stack empty\n"
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

extern stack_t *top;
/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

void ProcessFile(char *FileName);
char **ParseMontyCmd(char *line, char *separator, ssize_t Qchar);
void errors(int errn, char **Words, unsigned int ln, char *fileline, FILE *fp);
void errors2(int err, char **Words, unsigned int ln, char *fileline, FILE *fp);
void _puts(char *str);
char *_strcpy(char *dest, char *src);
char *_strcat(char *dest, char *src);
char *_strdup(char *str);
char *_strchr(char *s, char c);
int _strcmp(char *s1, char *s2);
int _strlen(char *s);
int _strncmp(char *s1, char *s2, int n);
int _putchar(char c);
int Validations(char **Words);
int ExecInstruction(char **Words, unsigned int linenumber);
stack_t *allocNewNode(char *data);
void push(stack_t **stack, unsigned int line_number);
void pall(stack_t **stack, unsigned int line_number);
void pint(stack_t **stack, unsigned int line_number);
void pop(stack_t **stack, unsigned int line_number);
void swap(stack_t **stack, unsigned int line_number);
void add(stack_t **stack, unsigned int line_number);
void sub(stack_t **stack, unsigned int line_number);
void mul(stack_t **stack, unsigned int line_number);
void divide(stack_t **stack, unsigned int line_number);
void mod(stack_t **stack, unsigned int line_number);
void pchar(stack_t **stack, unsigned int line_number);
void nop(stack_t **stack, unsigned int line_number);
void freeStack(void);
#endif /*MONTY*/
