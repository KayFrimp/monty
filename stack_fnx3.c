#include"monty.h"
/**
 * _mul - Multiplies the top two elements of the stack
 * @head: pointer to head node
 *
 */
void _mul(stack_t **head)
{
	stack_t *temp;

	temp = *head;
	((*head)->next)->n = ((*head)->next)->n * (*head)->n;
	*head = (*head)->next;
	free(temp);
}

/**
 * _div - Divides the second top element by the top element of the stack.
 * @head: pointer to head node
 *
 */
void _div(stack_t **head)
{
	stack_t *temp;

	temp = *head;
	((*head)->next)->n = ((*head)->next)->n / (*head)->n;
	*head = (*head)->next;
	free(temp);
}

/**
 * _mod - Modulus the second top element by the top element of the stack.
 * @head: pointer to head node.
 *
 */
void _mod(stack_t **head)
{
	stack_t *temp;

	temp = *head;
	((*head)->next)->n = ((*head)->next)->n % (*head)->n;
	*head = (*head)->next;
	free(temp);
}

/**
 * pchar - Prints the char at the top of the stack.
 * @head: pointer to the head node.
 *
 */
void pchar(stack_t **head)
{
	printf("%c\n", (char) (*head)->n);
}

/**
 * pstr - Prints the string starting at the top of the stack.
 * @head: pointer to the head node.
 *
 */
void pstr(stack_t **head)
{
	stack_t *i = *head;

	if (i == NULL)
		printf("\n");
	else
	{
		for (i = *head; i != NULL; i = i->next)
		{
			if (i->n == 0)
				break;
			if (i->n < 32 || i->n > 127)
				break;
			printf("%c", (char) i->n);
		}
		printf("\n");
	}
}
