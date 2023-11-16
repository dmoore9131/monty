#include "monty.h"

void swap(stack_t **stack, unsigned int line_number)
{
    int temp;
    stack_t *current = *stack;

    if (!current || !current->next)
    {
        fprintf(stderr, "L%u: can't swap, stack too short\n", line_number);
        exit(EXIT_FAILURE);
    }

    temp = current->n;
    current->n = current->next->n;
    current->next->n = temp;
}

