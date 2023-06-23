#include"monty.h"

/**
 * op_add - adds the top two elements of the stack
 * @stack: pointer to the head of the stack
 * @line_number: operation line number
 *
 */
void op_add(stack_t **stack, unsigned int line_number)
{
	if (stack_size(stack) < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	add(stack);
}

/**
 * op_nop - perform no operation on the stack
 * @stack: pointer to the head of the stack
 * @line_number: operation line number
 *
 */
void op_nop(stack_t **stack __attribute__((unused)),
		unsigned int line_number __attribute__((unused)))
{
}
