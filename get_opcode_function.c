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
		{"sub", op_sub},
		{"mul", op_mul},
		{"div", op_div},
		{"mod", op_mod},
		{"#", op_nop},
		{"nop", op_nop},
		{"pchar", op_pchar},
		{"pstr", op_pstr},
		{"rotl", op_rotl},
		{"rotr", op_rotr}
		/*{"stack", op_stack},*/
		/*{"queue", op_queue}*/
	};
	int i;

	for (i = 0; i < 16; i++)
	{
		if (cmd == NULL)
			break;
		if (strcmp(operations[i].opcode, cmd) == 0)
			return (operations[i].f);
	}
	fprintf(stderr, "L%d: unknown instruction %s\n", ln, cmd);
	exit(EXIT_FAILURE);
}
