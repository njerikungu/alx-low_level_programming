#include <unistd.h>
#include "main.h"

/**
*_isalpha - Entry point
*description: checks for alphabets
*@c: is the function for  lowercase or uppercase character
*Return: (1) if success, and 0 if otherwise
*/

int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
return (0);
}
