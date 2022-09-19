#include "main.h"

/**
 * rev_string - reverses string
 *@s: function for the string
 *Return: void
 */

void rev_string(char *s)
{
int c;
char rev = s[0];
int counter = 0;

for (c = 0; s[c] != '\0'; c++)
{
rev[c] = *(s + c);
}
c--;
for (c >= 0; c--)
{
*(s + counter) = *(rev + c);
counter++;
}
c++
}
