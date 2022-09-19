#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: function for string
 * Return: void
 */

void puts2(char *str)
{
int i;
char c;
c = (str);
for (i = 0; i < c; i += 2)
{
_putchar(str[i]);
}
_putchar('\n');
}
