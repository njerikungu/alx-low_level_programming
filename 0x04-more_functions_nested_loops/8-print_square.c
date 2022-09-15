nclude "main.h"

/**
*print_square - prints square
*@i: function for printing 
*Return: void
*/

void print_square(int n)
{
int i = 0, ii;

while (i < n && n > 0)
{
ii = 0;
while (ii < n)
{
putchar('#');
ii++;
																					}
_putchar('\n');
i++;
}
if (i == 0)
_putchar('\n');
}
