/*
 * main -  prints _putchar, followed by a new line.
 *
 * Return - Always 0
 */
#include "main.h"
int main(void)
{
	char school[10] = "_putchar";

	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(school[i]);
	}
	_putchar(10);
	return (0);
}