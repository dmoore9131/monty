#include "monty.h"
#include <sys/types.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
    ssize_t read;
    char *line = NULL;
    size_t len = 0;
    unsigned int line_number = 0;
    FILE *file;

    /* Check if the correct number of arguments is given */
    if (argc != 2)
    {
        fprintf(stderr, "USAGE: monty file\n");
        exit(EXIT_FAILURE);
    }

    /* Open the file */
    file = fopen(argv[1], "r");
    if (file == NULL)
    {
        fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }

    /* Read line by line */
    while ((read = getline(&line, &len, file)) != -1)
    {
        line_number++;
        /* TODO: Parse and execute the instructions */
    }

    /* Clean up and close the file */
    fclose(file);
    free(line);
    /* TODO: Free the stack */

    return EXIT_SUCCESS;
}

