#include "main.h"

/**
 **_strcpy - function that copies the string pointed to by src
 *@dest: character 1
 *@src: character 2
 *Return: (dest)
 */

char *_strcpy(char *dest, char *src)
{
int c = 0;
while (*(src + c) != '\0')
{
*(dest + c) = *(src + c);
c++;
}
*(dest + c) = '\0';
return (dest);
}
