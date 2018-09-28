#ifndef _MONTY_H_
#define _MONTY_H_
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
#define au __attribute__((unused))
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;
typedef struct variables_s
{
	char **argv;
	stack_t *stack;
	char *command;
	char *value;
	char *file_content;
	unsigned int line_number;
} variables_t;
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

extern variables_t *vars;

void _push(au stack_t **stack, au unsigned int line_number);
void _pall(au stack_t **stack, au unsigned int line_number);
void _pint(au stack_t **stack, au unsigned int line_number);
void _pop(au stack_t **stack, au unsigned int line_number);
void _swap(au stack_t **stack, au unsigned int line_number);
void _add(au stack_t **stack, au unsigned int line_number);
void _nop(au stack_t **stack, au unsigned int line_number);
int (*get_func(void))(stack_t **stack, unsigned int line_number);
void get_command(void);
void _freeing(void);
#endif
