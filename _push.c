#include "monty.h"
/**
 * _push - push a value to the top of the stack
 * @stack: Unused in this context
 * @line_number: Unused in this context
 * Return: Void
 */

void _push(au stack_t **stack, au unsigned int line_number)
{
	stack_t *current = vars->stack;
	stack_t *new;
	int i = 0;

	new = malloc(sizeof(stack_t));
	if (!new)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	new->next = current;
	new->prev = NULL;
	vars->stack = new;
	if (!vars->value)
	{
		fprintf(stderr, "L%u: usage: push integer\n",
			vars->line_number);
		_freeing();
	}
	while (vars->value[i] != '\0')
	{
		if ((vars->value[i] >= 48 && vars->value[i] <= 57) ||
			vars->value[i] == 45)
			i++;
		else
		{
			fprintf(stderr, "L%u: usage: push integer\n",
				vars->line_number);
			_freeing();
		}
	}
	new->n = atoi(vars->value);
	if (current)
		current->prev = new;
}
