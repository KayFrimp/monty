#include"monty.h"
/**
 * is_empty - checks if stack is empty
 * @head: pointer to head node
 *
 * Return: 1 if empty 0 if not empty
 */
int is_empty(stack_t **head)
{
	if (*head == NULL)
		return (1);
	return (0);
}

/**
 * top - get the value at the top of the stack
 * @head: pointer to head node
 *
 * Return: return the value at the top of stack
 */
int top(stack_t **head)
{
	return ((*head)->n);
}

/**
 * stack_size - get stack size
 * @head: pointer to head node
 *
 * Return: number of nodes in stack
 */
int stack_size(stack_t **head)
{
	int count = 0;
	stack_t *temp = *head;

	for (; temp != NULL; temp = temp->next)
		count++;
	return (count);
}

/**
 * push - push a new node unto stack
 * @head: pointer to head node
 * @value: new integer value
 *
 * Return: 1 if full 0 if not not
 */
void push(stack_t **head, int value)
{
	stack_t *new_node;
	stack_t *temp = *head;

	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	new_node->n = value;
	if (*head == NULL)
	{
		new_node->next = NULL;
		new_node->prev = NULL;
		*head = new_node;
	}
	else
	{
		new_node->next = temp;
		new_node->prev = NULL;
		*head = new_node;
	}
}

/**
 * pop - pop the top node off the stack
 * @head: pointer to head node
 *
 * Return: Returns value of popped node element.
 */
int pop(stack_t **head)
{
	stack_t *temp = NULL;
	int value;

	value = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);
	return (value);
}
