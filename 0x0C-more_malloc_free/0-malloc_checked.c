#include "main.h"

/**
 * malloc_checked - allocates memory using malloc, exit(98) if it fails
 * @b: size of the memory block to be allocated
 *
 * Return: pointer to the address of the memory block
 */
void *malloc_checked(unsigned int b)
{
	char *block = malloc(b);

	if (block == 0)
		exit(98);
	return (block);
}
