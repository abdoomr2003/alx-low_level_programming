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
	char *string;

	if (str == NULL)
		return (NULL);
	while (str[l] != '\0')
		l++;
	string = malloc((l + 1) * sizeof(char));

	if (string == NULL)
		return (NULL);
	if (string != NULL)
		for (i = 0 ; i <= l; i++)
			string[i] = str[i];
	return (string);

}
