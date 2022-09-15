#include "main.h"

/**
*print_line - draws straignt line
*@n: number of times _ is printed
*Return: void
*/
void print_line(int n)
{
int i = 0;

while (i < n && n > 0)
{
_putchar('_');
i++;
}
_putchar('\n');
}
