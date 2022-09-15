#include "main.h"

/**
*more_numbers - prints 10 times the numbers from 0 to 14
*descrption: only use _putchar 4 times
*Return: result
*/

void more_numbers(void)
{
int i = 0;
char j;
char k;
while (i < 10)
{
for (j = '0'; j <= '14'; j++)
{
k = j;
if (j > 9)
{
_putchar('1');
k = j % 10;
}
_putchar('0' + c);
}
_putchar('\n');
i++
}
}
