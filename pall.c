#include "monty.h"

/**
 * pall - Prints all the values on the stack, starting from the top.
 * @stack: Double pointer to the beginning of the stack
 * @line_number: Current line number in the Monty file being processed
 */
void pall(stack_t **stack, unsigned int line_number)
{
    stack_t *current;

    (void)line_number;

    if (!stack)
        exit(EXIT_FAILURE);

    current = *stack;

    while (current)
    {
        printf("%d\n", current->n);
        current = current->next;
    }
}

