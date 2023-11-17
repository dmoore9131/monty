#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void parse_opcode(char *line) {
    char *opcode;
    int arg;

    opcode = strtok(line, " \t\n");
    if (opcode == NULL) {
        fprintf(stderr, "Error: Missing opcode\n");
        exit(EXIT_FAILURE);
    }

    /* Handle different opcodes */
    if (strcmp(opcode, "push") == 0) {
        char *arg_str = strtok(NULL, " \t\n");
        if (arg_str == NULL || sscanf(arg_str, "%d", &arg) != 1) {
            fprintf(stderr, "Error: L%d: usage: push integer\n", 1);
            exit(EXIT_FAILURE);
        }
        /* Call push function with the parsed argument */
        /* push(&stack, arg); */
        printf("Push: %d\n", arg);
    }
    /* Add more opcodes as needed */
    else {
        fprintf(stderr, "Error: L%d: unknown instruction %s\n", 1, opcode);
        exit(EXIT_FAILURE);
    }
}

int main() {
    /* Test the opcode parsing function */
    char line[] = "push 42";
    parse_opcode(line);
    return 0;
}

