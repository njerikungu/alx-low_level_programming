#include "main.h"

/**
*more_numbers - prints 10 times the numbers from 0 to 14
*descrption: only use _putchar 4 times
*Return: result
*/

void more_numbers(void)
{
char i = 1, j = 0;
while (i <= '10')
{
for (j = '0'; j <= '14'; j++)
{
_putchar(j);
}
_putchar(i);
i++
}
}
