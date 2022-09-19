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
int temp = 0;
while (s[temp] != '\0')
temp++;
for (c = 0; c < temp; c++)
{
temp--;
rev s[i];
s[i] = s[temp];
s[temp] = rev;
}
