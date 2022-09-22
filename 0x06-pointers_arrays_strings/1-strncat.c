#include "main.h"

/**
 * _strncat - concatenates two strings
 *@dest: destination for string 1
 *@src: source for string 2
 *@n: number of bytes
 *Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
strncat(dest, src, n);
return (dest);
}
