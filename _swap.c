#include "monty.h"
/**
 * _swap - swap 2 elements on top of stack
 * @stack: Unused in this context
 * @line_number: Unused in this context
 * Return: Void
 */

void _swap(au stack_t **stack, au unsigned int line_number)
{
	int temp;

	if (!vars->stack || !((vars->stack)->next))
	{
		fprintf(stderr, "L%u: can't swap, stack too short\n",
			vars->line_number);
		_freeing();
	}
	if ((vars->stack)->next)
	{
		temp = (vars->stack)->n;
		(vars->stack)->n = (vars->stack)->next->n;
		(vars->stack)->next->n = temp;
	}
}
