#include <unistd.h>
#include "main.h"

/**
*print_alphabet_x10 - prints 10 times the alhabets in lowercase
*Return void
*/

void print_alphabet_x10(void)
{
char i = 1, s = 'a';
while (i <= 10)
{
while (s <= 'z')
{
_putchar(s);
s++;
}
_putchar('\n');
i++;
}
}
