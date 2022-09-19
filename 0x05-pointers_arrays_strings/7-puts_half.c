#include "main.h"

/**
 *puts_half - prints half a string
 *@str: function of string
 *Return: void
 */

void puts_half(char *str)
{
int c;
for (c = 0; str[c] != '\0'; c++)
c++;
for (c /= 2; str[c] != '\0')
{
_putchar(str[c]);
}
_putchar('\n');
}
