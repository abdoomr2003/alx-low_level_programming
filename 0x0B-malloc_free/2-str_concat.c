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

	n1 = sizeof(s1) / sizeof(s1[0]);
	n2 = sizeof(s2) / sizeof(s2[0]);

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	newstr = malloc((n1 + n2 * sizeof(car));
	if (newstr == NULL)
		return (NULL);
	for (i = 0 ; s1[i] != '\0' ; i++)
		newstr[i] = s1[i];
	for (; s2[j] != '\0' ; i++)
	{
		newstr[i] = s2[j];
		j++;
	}
	return (newstr);
}
