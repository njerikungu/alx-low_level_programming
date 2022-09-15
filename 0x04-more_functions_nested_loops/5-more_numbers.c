#include "main.h"

/**
*more_numbers - prints 10 times the numbers from 0 to 14
*descrption: only use _putchar 4 times
*Return: result
*/

void more_numbers(void)
{
char k, j;
int i = 0;
while (i < 10)
{
for (k = 0; k <= 14; k++)
{
j = k;
if (k > 9)
{
_putchar('1');
j = k % 10;
}
_putchar('0' + j);
}
_putchar('\n');
i++;
}
}
