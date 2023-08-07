#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concatenate two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to the newly allocated concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int n1, n2, i, j = 0;
	char *newstr;

	for (n1 = 0; s1[n1] != '\0'; n1++)
		;
	for (n2 = 0; s2[n2] != '\0'; n2++)
		;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	newstr = malloc((n1 + n2 + 1) * sizeof(char));
	if (newstr == NULL)
		return (NULL);
	for (i = 0 ; s1[i] != '\0' ; i++)
		newstr[i] = s1[i];
	for (; s2[j] != '\0' ; i++, j++)
		newstr[i] = s2[j];
	newstr[i] = '\0';
	return (newstr);
}
