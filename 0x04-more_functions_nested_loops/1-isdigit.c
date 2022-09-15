#include "main.h"

/**
*_isdigit - checks for digit
*@c: function for the digit
*Return: (1) for success 0 for otherwise
*/

int _isdigit(int c)
{
if (c >= '0' && c <= '9')
{
return (1);
}
return (0);
}
