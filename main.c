#include "monty.h"
/**
 * main- entry code
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	FILE *fstream;
	char *line = NULL, *cmd = NULL;
	size_t len = 0, line_number = 0;
	void (*func)(stack_t **, unsigned int);
	stack_t *head = NULL;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	fstream = fopen(argv[1], "r");
	if (fstream == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (getline(&line, &len, fstream) != -1)
	{
		line_number++;
		cmd = strtok(line, " \n\t");
		extern_param = strtok(NULL, " \n\t");
		if (cmd != NULL && cmd[0] != '#')
		{
			func = get_op_function(cmd, line_number);
			func(&head, line_number);
		}
	}
	free(line);
	free_stack(&head);
	fclose(fstream);
	return (0);
}
