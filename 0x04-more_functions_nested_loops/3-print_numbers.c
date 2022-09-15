i#include "main.h"

/**
*print_numbers - prints numbers from 0 to 9
*descrption: can only use _putchar twice
*Return: 1 for success
*/

void print_numbers(void)
{
char i;
for (i = '0'; i <= '9'; i++)
{
_putchar(i);
}
_putchar('\n');
return (0);
}
