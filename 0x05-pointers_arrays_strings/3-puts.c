#include "main.h"

/**
 *_puts - prints a string
 *@str: function for string
 *Return: void
 */

void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str++);
}
_putchar('\n');
}
