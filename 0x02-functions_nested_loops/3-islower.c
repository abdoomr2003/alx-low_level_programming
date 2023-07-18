#include "main.h"
#include <stdio.h>
/**
*main - checks for lowercase character.
*
*Return - Always 0.
*/
int _islower(int);
int main(void)
{   int r;

    r = _islower('H');
    _putchar(r + '0');
    r = _islower('o');
    _putchar(r + '0');
    r = _islower(108);
    _putchar(r + '0');
    _putchar('\n');
    return (0);

}
int _islower(int n)
{
    if (n='c')
    {
        return (1) ;
    }
    else
    {
        return(0);
    }
}
