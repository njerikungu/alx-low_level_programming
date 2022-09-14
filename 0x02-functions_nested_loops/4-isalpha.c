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
for ((i >='a'; i <='z'; i++) || (i >= 'A'; i <= 'Z'; i++))
{
if (c == i)
{
return (1);
}
}
return (0);
}
