#include "main.h"

/*
 * create_array - creates an array of chars, and initializes it with a specific char.
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: char
 */
char *create_array(unsigned int size, char c)
{
	int* s = malloc(size_t size);
	if(size==0)
		return(NULL);
	else
		do
		{
			s[size] = c;
			size--;
		}while(size!=0);
}
