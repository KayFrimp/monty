#include"monty.h"

/**
 * op_push - push operation
 * @stack: pointer to the head of the stack
 * @line_number: operation line number
 *
 */
void op_push(stack_t **stack, unsigned int line_number)
{
	if (extern_param == NULL)
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
	push(stack, atoi(extern_param));
}

/**
 * op_pall - print all operation
 * @stack: pointer to the head of the stack
 * @line_number: operation line number
 *
 */
void op_pall(stack_t **stack, unsigned int line_number __attribute__((unused)))
{
	if (!is_empty(stack))
	pall(stack);
}

/**
 * op_pop - push operation
 * @stack: pointer to the head of the stack
 * @line_number: operation line number
 *
 */
void op_pop(stack_t **stack, unsigned int line_number)
{
	if (is_empty(stack))
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}
	pop(stack);
}

/**
 * op_pint - prints the top element of the stack
 * @stack: pointer to the head of the stack
 * @line_number: operation line number
 *
 */
void op_pint(stack_t **stack, unsigned int line_number)
{
	if (is_empty(stack))
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", top(stack));
}

/**
 * op_swap - swaps the top two elements of the stack
 * @stack: pointer to the head of the stack
 * @line_number: operation line number
 *
 */
void op_swap(stack_t **stack, unsigned int line_number)
{
	if (stack_size(stack) < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	swap(stack);
}
