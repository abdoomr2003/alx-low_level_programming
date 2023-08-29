#include "main.h"
/**
*times_table - prints the 9 times table
*
*Return: returns nothing
*/
void main(void)
{
	int num;

	num = 0;
	do {
		_putchar(num + '0');
		if (num == 9)
		{
			num++;
			continue;
		}

		_putchar(',');
		_putchar(' ');
		num++;
	} while (num < 10);
	_putchar('\n');
}
