#include <unistd.h>
#include "main.h"

/**
*_abs - Entry point
*@i: function for absolute value
*description: prints absolute value
*Return: (-i) if n<0, (i) if n>=0
*/

int _abs(int i)
{
if (i < 0)
{
return (-i);
}
return (i);
}
