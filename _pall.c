#include "monty.h"
/**
 * _pall - print all elements on the stack
 * @stack: Pointer to pointer to first element on stack
 * @line_number: Line of the command from monty byte code file
 * Return: Void
 */
void _pall(au stack_t **stack, au unsigned int line_number)
{
	stack_t *current = vars->stack;

	while (current)
	{
		printf("%d\n", current->n);
		current = current->next;
	}

}
