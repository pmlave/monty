#include "monty.h"
/**
 * _swap - swap 2 elements on top of stack
 * @stack: Unused in this context
 * @line_number: Unused in this context
 * Return: Void
 */

void _swap(au stack_t **stack, au unsigned int line_number)
{
	stack_t *temp = vars->stack;

	if (!vars->stack || !((vars->stack)->next))
	{
		fprintf(stderr, "L%u: can't swap, stack too short\n",
			vars->line_number);
		_freeing();
	}
	if ((vars->stack)->next)
	{
		if (!(vars->stack)->next->next)
			(vars->stack)->next = NULL;
		else
			(vars->stack)->next = (vars->stack)->next->next;
		(vars->stack)->prev = temp->next;
		temp->next->prev = NULL;
		temp->next->next = temp;
		vars->stack = (vars->stack)->prev;
	}
}
