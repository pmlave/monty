#include "monty.h"
variables_t *vars;
/**
 * main - entry point
 * @argc: Number of arguments given
 * @argv: Arguments given
 * Return: 0 for success
 */
int main(int argc, char **argv)
{

	variables_t temp = {NULL, NULL, NULL, NULL, NULL, 1};

	vars = &temp;
	vars->argv = argv;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	get_command();
	free(vars->file_content);
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
	return (0);

}
