#include <unistd.h>
#include "main.h"

/**
*_abs: entry point
*description: prints absolute value
*returns: -i if n<0, i if n>=0
*/

int _abs(int i)
{
if (i < 0)
{
return (-i);
}
return (i);
}
