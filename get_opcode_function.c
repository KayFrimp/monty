#include"monty.h"

/**
 * get_op_function - get the operation function to be executed
 * @cmd: operation command
 * @ln: line number
 * Return: function for operation
 */
void (*get_op_function(char *cmd, unsigned int ln))(stack_t **, unsigned int)
{
	instruction_t operations[] = {
		{"push", op_push},
		{"pop", op_pop},
		{"pall", op_pall},
		{"pint", op_pint},
		{"swap", op_swap},
		{"add", op_add},
		{"nop", op_nop}
	};
	int i = 0;

	for ( ; i < 7; i++)
	{
		if (cmd == NULL)
		{
			fprintf(stderr, "L%d: unknown instruction %s\n", ln, cmd);
			exit(EXIT_FAILURE);
		}
		if (strcmp(operations[i].opcode, cmd) == 0)
			return (operations[i].f);
	}
	fprintf(stderr, "L%d: unknown instruction %s\n", ln, cmd);
	exit(EXIT_FAILURE);
}
