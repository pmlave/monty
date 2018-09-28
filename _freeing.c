#include "monty.h"
/**
 * _freeing - frees for other functions
 * Return: Void
 */

void _freeing(void)
{
	while (vars->stack)
	{
		if (!(vars->stack)->next)
		{
			free(vars->stack);
			break;
		}
		vars->stack = (vars->stack)->next;
		free((vars->stack)->prev);
	}
	free(vars->file_content);
	exit(EXIT_FAILURE);

}
