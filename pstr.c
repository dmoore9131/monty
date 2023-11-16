#include "monty.h"
#include <ctype.h> // Include this header for isascii

/**
 * pstr - Prints the string starting at the top of the stack, followed by a new line.
 * @stack: Double pointer to the beginning of the stack
 * @line_number: Current line number in the Monty file being processed
 */
void pstr(stack_t **stack, unsigned int line_number)
{
    stack_t *current;

    (void)line_number;

    if (!stack)
        exit(EXIT_FAILURE);

    current = *stack;

    while (current && current->n != 0 && isascii((unsigned char)current->n))
    {
        printf("%c", current->n);
        current = current->next;
    }

    printf("\n");
}

