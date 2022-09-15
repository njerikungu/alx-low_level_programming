#include "main.h"

/**
*print_most_numbers - prints all numbers from 0 to 9 apart from 2 and 4
*description: can only use _putchar twice
*Return: result
*/

void print_most_numbers(void)
{
char i;
for (i = '0'; i <= '9'; i++)
if (i != '2' && i != '4')
{
_putchar(i);
}
_putchar('\n');
}
