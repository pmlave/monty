#include "monty.h"
/**
 * _pop - remove top stack element
 * @stack: Unused in this context
 * @line_number: Unused in this context
 * Return: Void
 */
void _pop(au stack_t **stack, au unsigned int line_number)
{
	if (vars->stack)
	{
		if (!(vars->stack)->next)
		{
			free(vars->stack);
			vars->stack = NULL;
		}
		else
		{
			vars->stack = (vars->stack)->next;
			free((vars->stack)->prev);
			(vars->stack)->prev = NULL;
		}
	}
	else
	{
		fprintf(stderr, "L%u: can't pop an empty stack\n",
			vars->line_number);
		_freeing();
	}
}
