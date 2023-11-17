#include <stdio.h>
#include <stdlib.h>

typedef struct stack_s {
    int n;
    struct stack_s *prev;
    struct stack_s *next;
} stack_t;

void pall(stack_t *stack) {
    /* Implement pall logic here */
    /* Print values on the stack */
    printf("Stack values: ");
    stack_t *ptr;
    for (ptr = stack; ptr != NULL; ptr = ptr->next) {
        printf("%d ", ptr->n);
    }
    printf("\n");
}

int main() {
    /* Test the pall function */
    stack_t *stack = NULL;
    push(&stack, 42);
    push(&stack, 99);
    
    /* Print the stack */
    pall(stack);

    return 0;
}

