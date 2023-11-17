#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
int count_words(char **words);

#endif /* MONTY_H */

