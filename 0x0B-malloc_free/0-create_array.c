#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * create_array - create an array of size with char c
 * @size: unsigned int type
 * @c: char type
 * Return: Return pointer to array created
 */
char *create_array(unsigned int size, char c)
{
    char *s = malloc(size * sizeof(char));

    if (s == NULL)
    {
        // Failed to allocate memory, return NULL to indicate the failure
        return NULL;
    }

    if (size == 0)
    {
        // Size is 0, return NULL to indicate an empty array
        return NULL;
    }

    unsigned int i;
    for (i = 0; i < size; i++)
    {
        s[i] = c;
    }

    return s;
}

