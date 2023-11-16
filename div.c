#include "monty.h"

/**
 * div_op - Divides the second top element of the stack by the top element.
 * @stack: Double pointer to the beginning of the stack
 * @line_number: Current line number in the Monty file being processed
 */
void div_op(stack_t **stack, unsigned int line_number)
{
    (void)line_number;

    if (!stack || !*stack || !(*stack)->next)
    {
        fprintf(stderr, "L%d: can't div, stack too short\n", line_number);
        exit(EXIT_FAILURE);
    }

    if ((*stack)->n == 0)
    {
        fprintf(stderr, "L%d: division by zero\n", line_number);
        exit(EXIT_FAILURE);
    }

    (*stack)->next->n /= (*stack)->n;
    pop(stack, line_number);
}

