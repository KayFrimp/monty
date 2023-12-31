#include"monty.h"
/**
 * pall - print all the elements in the stack from the top to bottom
 * @head: pointer to head node
 *
 */
void pall(stack_t **head)
{
	stack_t *temp = *head;

	for (; temp != NULL; temp = temp->next)
		printf("%d\n", temp->n);
}

/**
 * _add - Add the top two elements of the stack
 * @head: pointer to head node
 *
 */
void _add(stack_t **head)
{
	stack_t *temp;

	temp = *head;
	((*head)->next)->n = ((*head)->next)->n + (*head)->n;
	*head = (*head)->next;
	free(temp);
}

/**
 * swap - Swap the top two elements of the stack
 * @head: pointer to head node
 *
 */
void swap(stack_t **head)
{
	stack_t *temp;

	temp = (*head)->next;
	(*head)->next = temp->next;
	temp->next = *head;
	*head = temp;
}

/**
 * free_stack - deallocates the memory spaces used by the stack
 * @head: pointer to head node
 *
 */
void free_stack(stack_t **head)
{
	stack_t *temp = *head;
	stack_t *next;

	for (; temp != NULL;)
	{
		next = temp->next;
		free(temp);
		temp = next;
	}
}

/**
 * _sub - Subtracts the top element from the next element of the stack.
 * @head: pointer to head node
 *
 */
void _sub(stack_t **head)
{
	stack_t *temp;

	temp = *head;
	((*head)->next)->n = ((*head)->next)->n - (*head)->n;
	*head = (*head)->next;
	free(temp);
}
