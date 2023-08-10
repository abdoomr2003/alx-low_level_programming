#include "main.h"

/**
 * string_nconcat - function that concatenates two strings
 *
 * @s1: string 1
 * @s2: string 2
 * @n: bytes of @s2 to add to @s1 to be a new string
 *
 * Return: new string followed by the first @n bytes
 *         of string 2 @s2 or NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int str_len_s1, str_len_s2, i, j;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	str_len_s1 = 0;
	str_len_s2 = 0;

	while (*(s1 + str_len_s1) != '\0')
		str_len_s1++;
	while (*(s2 + str_len_s2) != '\0')
		str_len_s2++;

	if (n >= str_len_s2)
		n = str_len_s2;

	str = malloc((str_len_s1 + n + 1) * sizeof(char));

	if (str == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];

	for (j = 0; j < n && s2[j] != '\0'; j++)
	{
		str[i] = s2[j];
		i++;
	}
	str[i] = '\0';
	return (str);
}
