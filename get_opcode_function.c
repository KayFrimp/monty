#include"monty.h"

/**
 * get_op_function - get the operation function to be executed
 * @cmd: operation command
 *
 * Return: function for operation
 */
void (*get_op_function(char *cmd))(stack_t **, unsigned int)
{
        instruction_t operations[] = {
                {"push", op_push},
                {"pop", op_pop},
                {"pall", op_pall},
                {"pint", op_pint},
                {"swap", op_swap},
                {"add", op_add},
                {"nop", op_nop},
                {NULL, op_nop}
        };
        int i = 0;

        for ( ; i < 8; i++)
        {
                if (cmd == NULL)
                        return (operations[7].f);
                if (strcmp(operations[i].opcode, cmd) == 0)
                        return (operations[i].f);
        }
        return (operations[7].f);
}
