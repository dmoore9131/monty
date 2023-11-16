#include "monty.h"

void rotl(stack_t **stack, unsigned int line_number)
{
    (void)line_number;

    if (*stack && (*stack)->next)
    {
        stack_t *temp = *stack;
        *stack = (*stack)->next;
        temp->next = NULL;
        temp->prev = NULL;

        while ((*stack)->next)
            *stack = (*stack)->next;

        (*stack)->next = temp;
        temp->prev = *stack;
    }
}

