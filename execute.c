#include <stdio.h>
#include <stdlib.h>
#include "monty.h"

void execute_opcode(stack_t **stack, unsigned int line_number)
{
    if (data.words == NULL || data.words[0] == NULL)
        return;  /* Empty line, ignore */

    if (strcmp(data.words[0], "push") == 0)
    {
        if (data.words[1] == NULL)
        {
            fprintf(stderr, "L%u: usage: push integer\n", line_number);
            exit(EXIT_FAILURE);
        }
        push_stack(stack, atoi(data.words[1]));
    }
    else if (strcmp(data.words[0], "pall") == 0)
    {
        pall(stack, line_number);
    }
    /* Add more opcode handling here as needed */
    else
    {
        fprintf(stderr, "L%u: unknown instruction %s\n", line_number, data.words[0]);
        exit(EXIT_FAILURE);
    }
}

