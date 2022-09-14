#include <unistd.h>
#include "main.h"

/**
*_islower - checks for lowercase characters
* c - islower
 *Return: 1 for success, 0 otherwise
*/

int _islower(int c)
{
int i;
for (i = 'a'; i <= 'z'; i++)
{
if (i == c)
{
return (1);
}
}
return (0);
}
