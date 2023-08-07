#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - create an arry of size with char c
 * @size: unsigned int type
 * @c: char type
 * Return: Return pointer to array created
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s = malloc((size) * sizeof(char));

	if (size == 0)
		return (NULL);
	if (s == 0)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	return (s);
}
