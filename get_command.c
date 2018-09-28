#include "monty.h"
/**
 * get_command - tokenize command and value
 * Return: Void
 */

void get_command(void)
{
	FILE *fd;
	size_t j = 0;

	fd = fopen(vars->argv[1], "r");
	if (fd == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", vars->argv[1]);
		exit(EXIT_FAILURE);
	}
	while (getline(&(vars->file_content), &j, fd) != -1)
	{
		vars->command = strtok(vars->file_content, " \n");
		vars->value = strtok(NULL, " \n");
		get_func();
		vars->line_number++;
	}
	fclose(fd);
}
