#include <unistd.h>
#include "main.h"

/**
*_isalpha - checks for alphabetic character
*@c: declares c is lowercase or uppercase
*Return (1) if success, and 0 if otherwise
*/

int _isalpha(int c)
{
int i;
if ((i >='a' && i <='z') || (i >= 'A' && i <= 'Z'))
{
return (1)
}
return (0);
}
