#include "main.h"

/**
 * _strncpy - copies string
 * @dest: DESTINATION OF STRING
 * @src: source of string
 * @n: function n
 * Return: 0
 */

char *_strncpy(char *dest, char *src, int n)
{
	for (n = 0; src[n] != '\0'; n++)
	{
		dest[n] = src[n];
	}
	dest[n] = '\0';
	return (dest);

}
