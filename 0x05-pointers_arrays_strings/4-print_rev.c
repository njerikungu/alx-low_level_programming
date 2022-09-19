#include "main.h"

/**
 *print_rev - prints string in reverse
 *@s: function for string
 *Return: void 
 */

void print_rev(char *s)
{
if (*s)
{
reverse(s+1);
_putchar(*s);
}
_putchar('\n');
}
