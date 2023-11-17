#include <stdio.h>
#include <stdlib.h>
#include "monty.h"

void push_stack(stack_t **stack, int value)
{
    stack_t *new_node = malloc(sizeof(stack_t));

    if (new_node == NULL)
    {
        fprintf(stderr, "Error: malloc failed\n");
        exit(EXIT_FAILURE);
    }

    new_node->n = value;
    new_node->next = *stack;
    *stack = new_node;
}

/* Add other stack manipulation functions here */

