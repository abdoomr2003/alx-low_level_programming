#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _isdigit - Checks if a character is a digit.
 * @c: The character to be checked.
 *
 * Return: 1 if the character is a digit, otherwise 0.
 */
int _isdigit(char c)
{
	return (c >= '0' && c <= '9');
}
/**
 * _strlen - Calculates the length of a string.
 * @str: The input string.
 *
 * Return: The length of the string.
 */
int _strlen(char *str)
{
	int len = 0;

	while (str[len] != '\0')
		len++;
	return (len);
}
/**
 * _multiply - Multiplies two positive numbers represented as strings.
 * @num1: The first positive number.
 * @num2: The second positive number.
 */
void _multiply(char *num1, char *num2)
{
	int len1 = _strlen(num1);
	int len2 = _strlen(num2);
	int *result = malloc(sizeof(int) * (len1 + len2));

	if (!result)
	{
		_putchar("Error\n");
		exit(98);
	}
	for (int i = 0; i < len1 + len2; i++)
		result[i] = 0;

	for (int i = len1 - 1; i >= 0; i--)
	{
		for (int j = len2 - 1; j >= 0; j--)
		{
			int product = (num1[i] - '0') * (num2[j] - '0');
			int sum = product + result[i + j + 1];

			result[i + j + 1] = sum % 10;
			result[i + j] += sum / 10;
		}
	}
	int printed = 0;

	for (int i = 0; i < len1 + len2; i++)
	{
		if (result[i] != 0 || printed)
		{
			_putchar("%d", result[]);
			printed = 1;
		}
	}
	if (!printed)
		_putchar("0");
	_putchar("\n");
	free(result);
}
/**
 * main - multiply two positive numbers provided.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings representing the command-line arguments.
 *
 * Return: 0 if successful, 98 if there's an error.
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		_putchar("Error\n");
		return (98);
	}

	char *num1 = argv[1];
	char *num2 = argv[2];

	for (int i = 0; num1[i] != '\0'; i++)
	{
		if (!_isdigit(num1[i]))
		{
			_putchar("Error\n");
			return (98);
		}
	}

	for (int i = 0; num2[i] != '\0'; i++)
	{
		if (!_isdigit(num2[i]))
		{
			_putchar("Error\n");
			return (98);
		}
	}
	_multiply(num1, num2);
	return (0);
}
