#include <unistd.h>
#include "main.h"

/**
*print_last_digit - Entry point
*@i: function for last digit 
*description: prints last digit of a number
*Return: Always 0
*/

int print_last_digit(int i)
{
int num = i % 10;
if (i < 0)
{
num = num * -1;
}
_putchar(num + '0');
return (num);
}
