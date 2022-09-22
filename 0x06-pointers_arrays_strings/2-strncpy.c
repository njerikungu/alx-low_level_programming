#include "main.h"

/**
 * _strncpy - copies string
 * @dest: DESTINATION OF STRING
 * @src: source of string
 * @n: function n
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int c;

	for (c = 0; c < n && src[c]; c++)
	{
		dest[c] = src[c];
	}
	for (; c < n; c++)
	{
		dest[c] = '\0';
	}
	return (dest);
}
