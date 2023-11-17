#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>

typedef struct stack_s
{
    int n;
    struct stack_s *next;
} stack_t;

extern struct
{
    char **words;
} data;

void parse_line(char *line);
void execute_opcode(stack_t **stack, unsigned int line_number);
void free_stack(stack_t **stack);
void push_stack(stack_t **stack, int value);

#endif /* MONTY_H */

