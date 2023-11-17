#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "monty.h"

void parse_line(char *line)
{
    const char *delimiters = " \t\n";
    char *token;

    /* Free the previous words array */
    if (data.words != NULL)
    {
        free(data.words);
        data.words = NULL;
    }

    /* Tokenize the input line */
    token = strtok(line, delimiters);
    if (token == NULL)
        return;  /* Empty line, ignore */

    data.words = malloc(sizeof(char *));
    if (data.words == NULL)
    {
        fprintf(stderr, "Error: malloc failed\n");
        exit(EXIT_FAILURE);
    }

    data.words[0] = strdup(token);
    if (data.words[0] == NULL)
    {
        fprintf(stderr, "Error: strdup failed\n");
        exit(EXIT_FAILURE);
    }

    /* Tokenize the rest of the line */
    while ((token = strtok(NULL, delimiters)) != NULL)
    {
        data.words = realloc(data.words, (sizeof(char *) * (count_words(data.words) + 1)));
        if (data.words == NULL)
        {
            fprintf(stderr, "Error: realloc failed\n");
            exit(EXIT_FAILURE);
        }

        data.words[count_words(data.words)] = strdup(token);
        if (data.words[count_words(data.words)] == NULL)
        {
            fprintf(stderr, "Error: strdup failed\n");
            exit(EXIT_FAILURE);
        }
    }

    data.words = realloc(data.words, (sizeof(char *) * (count_words(data.words) + 1)));
    if (data.words == NULL)
    {
        fprintf(stderr, "Error: realloc failed\n");
        exit(EXIT_FAILURE);
    }

    data.words[count_words(data.words)] = NULL;
}

int count_words(char **words)
{
    int count = 0;

    while (words != NULL && words[count] != NULL)
    {
        count++;
    }

    return count;
}

