#include <stdio.h>
#include <stdlib.h>

typedef struct stack_s {
    int n;
    struct stack_s *prev;
    struct stack_s *next;
} stack_t;

void push(stack_t **stack, int value) {
    stack_t *new_node = malloc(sizeof(stack_t));
    if (new_node == NULL) {
        fprintf(stderr, "Error: malloc failed\n");
        exit(EXIT_FAILURE);
    }

    new_node->n = value;
    new_node->prev = NULL;
    new_node->next = *stack;

    if (*stack != NULL) {
        (*stack)->prev = new_node;
    }

    *stack = new_node;
}

int main() {
    /* Test the push function */
    stack_t *stack = NULL;
    push(&stack, 42);
    push(&stack, 99);
    
    /* Print the stack */
    printf("Stack values: ");
    stack_t *ptr;
    for (ptr = stack; ptr != NULL; ptr = ptr->next) {
        printf("%d ", ptr->n);
    }
    printf("\n");

    return 0;
}

