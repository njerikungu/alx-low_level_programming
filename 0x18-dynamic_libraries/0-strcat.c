#include "main.h"

/**
 *_strcat - concatenates two strings
 *@dest: ciontains address of string 1
 *@src: contains address of string 2
 *Return: 0
 */

char *_strcat(char *dest, char *src)
{
int i = 0;
int j = 0;
while (dest[i] != '\0')
{
i++;
}
while (src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';
return (dest);
}
