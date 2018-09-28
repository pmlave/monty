#include "monty.h"
/**
 * _pint - print the value at top of the stack if it exists
 * @stack: Unused in this context
 * @line_number: Unused in this context
 * Return: Void
 */
void _pint(au stack_t **stack, au unsigned int line_number)
{
	if (vars->stack)
		printf("%i\n", (vars->stack)->n);
	else
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n",
			vars->line_number);
		_freeing();
		exit(EXIT_FAILURE);
	}

}
