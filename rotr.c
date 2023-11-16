#include "monty.h"

void rotr(stack_t **stack, unsigned int line_number)
{
    (void)line_number;

    if (*stack && (*stack)->next)
    {
        stack_t *temp = *stack;

        while (temp->next)
            temp = temp->next;

        temp->prev->next = NULL;
        temp->prev = NULL;

        temp->next = *stack;
        (*stack)->prev = temp;
        *stack = temp;
    }
}

