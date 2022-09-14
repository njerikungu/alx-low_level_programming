#include <unistd.h>
#include "main.h"

/**
*print_sign - Entry point
*@n: function for sign of number
*description: prints sign of number
*Return (0) if is 0, (1) if is greater than 0, (-1) if less than 0
*/

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
_putchar('-');
return (-1);
}

