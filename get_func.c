#include "monty.h"
/**
 * get_func - compares the command given to pass the right function
 * Return: 0 for success, -1 for no match
 */
int (*get_func(void))(stack_t **stack, unsigned int line_number)
{
	instruction_t commands[] = {
		{"push", _push},
		{"pall", _pall},
		{"pint", _pint},
		{"pop", _pop},
		{"swap", _swap},
		{"add", _add},
		{"nop", _nop},
		{"sub", _sub},
		{"div", _div},
		{"mul", _mul},
		{"mod", _mod},
		{"pchar", _pchar},
		{NULL, NULL}
	};
	int i = 0;

	while (commands[i].opcode != '\0')
	{
		if (!strcmp(commands[i].opcode, vars->command))
		{
			commands[i].f(NULL, 0);
			return (0);
		}
		i++;
	}
	fprintf(stderr, "L%u: unknown instruction %s\n",
		vars->line_number, vars->command);
	_freeing();
	return (NULL);
}
