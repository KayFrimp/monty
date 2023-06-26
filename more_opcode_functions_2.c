#include "monty.h"

/**
 * op_mul - multiply the top two elements of the stack
 * @stack: pointer to the head of the stack
 * @line_number: operation line number
 *
 */
void op_mul(stack_t **stack, unsigned int line_number)
{
	if (stack_size(stack) < 2)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	_mul(stack);
}

/**
 * op_pchar - print the char at the top of the stack
 * @stack: pointer to the head of the stack
 * @line_number: operation line number
 *
 */
void op_pchar(stack_t **stack, unsigned int line_number)
{
	if (is_empty(stack) == 1)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	if ((*stack)->n < 32 || (*stack)->n > 127)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", line_number);
		exit(EXIT_FAILURE);
	}
	pchar(stack);
}

/**
 * op_pstr - prints the string starting at the top of the stack
 * @stack: pointer to the head of the stack
 * @line_number: operation line number
 *
 */
void op_pstr(stack_t **stack, unsigned int line_number __attribute__((unused)))
{
	pstr(stack);
}

/**
 * op_rotl - rotates the stack to the top
 * @stack: pointer to the head of the stack
 * @line_number: operation line number
 *
 */
void op_rotl(stack_t **stack, unsigned int line_number __attribute__((unused)))
{
	rotl(stack);
}

/**
 * op_rotr - rotates the stack to the bottom
 * @stack: pointer to the head of the stack
 * @line_number: operation line number
 *
 */
void op_rotr(stack_t **stack, unsigned int line_number __attribute__((unused)))
{
	rotr(stack);
}
