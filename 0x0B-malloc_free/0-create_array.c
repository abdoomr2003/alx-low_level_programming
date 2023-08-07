#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * create_array - create an arry of size with char c
 * @size: unsigned int type
 * @c: char type
 * Return: Return pointer to array created
 */
char *create_array(unsigned int size, char c)
{
	char *s = malloc((size + 1) * sizeof(char));

	if (size == 0)
		return (NULL);
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	s[size] = '\0';
	return (s);
}
