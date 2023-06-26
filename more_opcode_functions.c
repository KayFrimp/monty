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
	_add(stack);
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

/**
 * op_sub - subtracts the top two elements of the stack
 * @stack: pointer to the head of the stack
 * @line_number: operation line number
 *
 */
void op_sub(stack_t **stack, unsigned int line_number)
{
	if (stack_size(stack) < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	_sub(stack);
}

/**
 * op_div - divides the top two elements of the stack (top 2nd / top 1st)
 * @stack: pointer to the head of the stack
 * @line_number: operation line number
 *
 */
void op_div(stack_t **stack, unsigned int line_number)
{
	if (stack_size(stack) < 2)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	if (top(stack) == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}
	_div(stack);
}

/**
 * op_mod - modulos the top two elements of the stack (top 2nd / top 1st)
 * @stack: pointer to the head of the stack
 * @line_number: operation line number
 *
 */
void op_mod(stack_t **stack, unsigned int line_number)
{
	if (stack_size(stack) < 2)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	if (top(stack) == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_number);
	exit(EXIT_FAILURE);
	}
	_mod(stack);
}
