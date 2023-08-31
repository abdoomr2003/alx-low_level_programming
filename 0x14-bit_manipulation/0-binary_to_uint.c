#include "main.h"

/**
 * binary_to_uint - convert a binary to UI
 * @b: pointing to a string of 0 and 1 chars
 *
 * Return: UI if b ! 0 || 1 NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int convert = 0;
	int i;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0' || b[i] == '1')
			convert = convert * 2 + (b[i] - '0');
		else
			return (0);
	}
	return (convert);
}
