#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/*
 * create_array - creates an array of chars, and initializes it with a specific char.
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: char
 */
char *create_array(unsigned int size, char c)
{
	char* s = malloc((size+1) * sizeof(char));
	if(size==0)
		return NULL;
	else
		for(size_t i=0 ;i < size; i++)
		{
			s[i] = c;
		}
	s[size] = '\0';
	return s;
}
