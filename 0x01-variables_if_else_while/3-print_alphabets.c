#include <stdio.h>
/*
 * main - prints the alphabet in lowercase, and then in uppercase, followed by a new line.
 *
 * ٌRuturn: Always 0 (success).
 */
int main(void)
{
      char litter;
      for (litter = 'a' ; litter <= 'z' ; litter ++)
	      putchar(litter);
      for (litter = 'A' ; litter <= 'Z' ; litter ++)
	      putchar(litter);
      putchar('\n');
      return (0);
}
