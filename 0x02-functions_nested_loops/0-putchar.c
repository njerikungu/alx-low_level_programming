#include <unistd.h>
#include "main.h"

/**
*main - prints _putchar
*description - dont use standard library
*Return - 0 for success
*/

int main(void)
{
char text[8] = "_putchar";
int i = 0;
for (i = 0; i < 8; i++)
{
_putchar(text[i]);
}
_putchar('\n');
return (0);
}
