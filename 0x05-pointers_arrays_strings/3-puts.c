#include "main.h"

/**
 *_puts - prints a string
 *@str: function for string
 *Return: void
 */

void _puts(char *str)
{
char p;
while (*str != '\0')
{
_putchar(*str++);
}
_putchar('\n');
return (0);
}
