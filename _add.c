#include "monty.h"
/**
 * _add - add top two stack elements
 * @stack: Unused in this context
 * @line_number: Unused in this context
 * Return: Void
 */

void _add(au stack_t **stack, au unsigned int line_number)
{
	if (!vars->stack || !((vars->stack)->next))
	{
		fprintf(stderr, "L%u: can't add, stack too short\n",
			vars->line_number);
		_freeing();
	}
	(vars->stack)->next->n += (vars->stack)->n;
	_pop(&(vars->stack), vars->line_number);

}
