#include "main.h"

/**
 *_strcat - concatenates two strings
 *@dest: ciontains address of string 1
 *@src: contains address of string 2
 *Return: 0
 */

char *_strcat(char *dest, char *src)
{
int i = 0, j = 0;
while (dest[i] != '\0')
{
++dest;
i++;
}
while (src[j] != '\0')
{
*dest = *src
dest++;
src++;
j++;
}
_putchar(dest);
return (0);
}
