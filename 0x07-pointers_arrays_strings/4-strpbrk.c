#include "main.h"

/**
 *_strpbrk - searches a string for any set of array
 *@s: string to be searched
 *@accept: string containing bytes to be searched for
*Return: null
*/

char *_strpbrk(char *s, char *accept)
{
	int i, j, pos, flg;

	i = 0;
	while (s[i])
		i++;

	pos = i;
	i = 0;
	while (accept[j])
	{
		j = 0;
		while (s[j])
		{
			if (accept[i] == s[j])
			{
				(j <= pos)
				{
					pos = j;
					flg = 1;
				}
			}
			j++;
		}
		i++;
	}
	if (flg == 1)
		return (&s[pos]);
	return ('\0');
}
