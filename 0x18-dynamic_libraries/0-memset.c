#include "main.h"

/**
 *_memset - fills the memory with a constant byte
 *@s: pointer of memory area
 *@b: constant byte b
 *@n: first n bytes
 *Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}

