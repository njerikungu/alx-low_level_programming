#include "main.h"

/**
 *_strspn - length of a prefix substring
 *@s: string to be scanned
 *@accept: string containing characters to match
 *Return: number of bytes in initial segment s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
		while (s[i] && strchr(accept, s[i])
			i++;
			return (i);
}
