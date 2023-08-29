#include "main.h"

/**
 * puts_half - prints half of a string
 * followed by a new line
 * @str: string to be printed
 */
void puts_half(char *str)
{
	int i, len, j;
	for (i = 0; str[i] !='\0'; i++);
	len = (i-1);
	for (j = ((len-1) / 2); j < len; j++)
		_putchar(str[j]);
	if (len % 2 != 0)
		_putchar(str[len]);
	_putchar('\n');
}
