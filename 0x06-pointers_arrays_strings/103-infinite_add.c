#include "main.h"
#include <stdio.h>

/**
 * infinite_add - adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: buffer that the function will use to store the result
 * @size_r: buffer size
 *
 * Return: pointer to the result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    int i = 0, j = 0, k = 0, l = 0, m = 0;
    char c;

    while (n1[i] != '\0')
        i++;
    while (n2[j] != '\0')
        j++;
    if (i > size_r || j > size_r)
        return (0);
    for (i--, j--, k = 0; k < size_r - 1 && (i >= 0 || j >= 0); i--, j--, k++)
    {
        c = m;
        if (i >= 0)
            c += n1[i] - '0';
        if (j >= 0)
            c += n2[j] - '0';
        r[k] = c % 10 + '0';
        m = c / 10;
    }
    if (m != 0 || k == size_r - 1 || (k == size_r - 2 && (i >= 0 || j >= 0)))
        return (0);
    for (i = k - 1, l = 0; l < i; i--, l++)
        c = r[i], r[i] = r[l], r[l] = c;
    r[k] = '\0';
    return (r);
}

