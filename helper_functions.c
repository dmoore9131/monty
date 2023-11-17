#include "monty.h"
#include <ctype.h>

/**
 * is_numeric - Checks if a string is a numeric value
 * @str: String to check
 *
 * Return: 1 if numeric, 0 otherwise
 */
int is_numeric(const char *str)
{
    int i = 0;

    if (str == NULL)
        return 0;

    if (str[i] == '-')
        i++;

    while (str[i] != '\0')
    {
        if (!isdigit((unsigned char)str[i]))
            return 0;
        i++;
    }

    return 1;
}

