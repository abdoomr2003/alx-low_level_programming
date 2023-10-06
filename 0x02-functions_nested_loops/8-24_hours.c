#include <stdio.h>
/**
*jack_bauer - prints each minute of the day
*
*Return:returns 0
*/
void jack_bauer(void)
{
int min, hour;
for (hour = 0; hour <= 23; hour++)
{
for (min = 0; min <= 59; min++)
{
putchar((hour / 10) + '0');
putchar((hour % 10) + '0');
putchar(':');
putchar((min / 10) + '0');
putchar((min % 10) + '0');
putchar(10);
}
}

}

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	jack_bauer();
	return (0);
}