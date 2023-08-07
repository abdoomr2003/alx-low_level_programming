#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - create a duplicate of a string
 * @str: the string to be duplicated
 *
 * Return: pointer to the newly allocated duplicated string
 */
char *_strdup(char *str)
{
	unsigned int i, l = 0;
	char *string = malloc(l * sizeof(char));

	while (str[l] != '\0')
		l++;

	if (str == 0 || string == NULL)
		return (NULL);
	if (string != NULL)
		for (i = 0 ; i <= l; i++)
			string[l] = str[i];
	return (string);

}
