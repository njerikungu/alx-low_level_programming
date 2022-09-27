#include "main.h"

/**
 *_strspn - length of a prefix substring
 *@s: string to be scanned
 *@accept: string containing characters to match
 *Return: number of bytes in initial segment s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	i = 0;

	while (s[i])
	{
		j = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				break;
			}
			j++;
		}
		if (!accept[j])
		{
			return (i);
		}
		i++;
	}
			return (i);
}
