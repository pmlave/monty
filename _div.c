#include "monty.h"
/**
 * _div - divide top element by second element
 * @stack: Unused in this context
 * @line_number: Unused in this context
 * Return: Void
 */

void _div(au stack_t **stack, au unsigned int line_number)
{
	if (!vars->stack || !((vars->stack)->next))
	{
		fprintf(stderr, "L%u: can't div, stack too short\n",
			vars->line_number);
		_freeing();
	}
	if ((vars->stack)->n == 0)
	{
		fprintf(stderr, "L%u: division by zero\n", vars->line_number);
		_freeing();
	}
	(vars->stack)->next->n = (vars->stack)->next->n / (vars->stack)->n;
	_pop(&(vars->stack), vars->line_number);


}
