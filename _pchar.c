#include "monty.h"
/**
 * _pchar - print ascii value for top element
 * @stack: Unused in this context
 * @line_number: Unused in this context
 * Return: Void
 */

void _pchar(au stack_t **stack, au unsigned int line_number)
{
	if ((vars->stack)->n > 255 || (vars->stack)->n < 0)
	{
		fprintf(stderr, "L%u: can't pchar, value out of range\n",
			vars->line_number);
		_freeing();
	}
	printf("%c\n", (vars->stack)->n);

}
