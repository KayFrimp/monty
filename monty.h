#ifndef MONTY_H
#define MONTY_H

#define _POSIX_C_SOURCE 200809L
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
#include<fcntl.h>
#include<sys/types.h>

extern char *extern_param;

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;


/* stack_fnx.c */
int is_empty(stack_t **head);
int top(stack_t **head);
int stack_size(stack_t **head);
void push(stack_t **head, int value);
int pop(stack_t **head);


/* stack_fnx2.c */
void pall(stack_t **head);
void free_stack(stack_t **head);
void add(stack_t **head);
void swap(stack_t **head);
void nop(stack_t **head);


/* op_functions.c */
void op_push(stack_t **stack, unsigned int line_number);
void op_pop(stack_t **stack, unsigned int line_number);
void op_pint(stack_t **stack, unsigned int line_number);
void op_pall(stack_t **stack, unsigned int line_number);
void op_add(stack_t **stack, unsigned int line_number);


/* op_functions2.c */
void op_swap(stack_t **stack, unsigned int line_number);
void op_nop(stack_t **stack, unsigned int line_number);

/* get_op_function.c */
void (*get_op_function(char *cmd, unsigned int ln))(stack_t **, unsigned int);

#endif /* MONTY_H */
