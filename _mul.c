#include "monty.h"
/**
 * _mul - multiply top element by second element
 * @stack: Unused in this context
 * @line_number: Unused in this context
 * Return: Void
 */

void _mul(au stack_t **stack, au unsigned int line_number)
{
	if (!vars->stack || !((vars->stack)->next))
	{
		fprintf(stderr, "L%u: can't mul, stack too short\n",
			vars->line_number);
		_freeing();
	}
	(vars->stack)->next->n *= (vars->stack)->n;
	_pop(&(vars->stack), vars->line_number);


}
