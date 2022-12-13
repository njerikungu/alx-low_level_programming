#include "main.h"

/**
 *_strpbrk - searches a string for any set of array
 *@s: string to be searched
 *@accept: string containing bytes to be searched for
*Return: null
*/

char *_strpbrk(char *s, char *accept)
{
	int i, j, pos, flg = 0;

	for (i = 0; s[i] != '\0'; i++);

	pos = i;
	for (i = 0; accept[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (accept[i] == s[j])
			{
				while (j <= pos)
				{
					pos = j;
					flg = 1;
				}
			}
		}
	}
	if (flg == 1)
	{
		return (&s[pos]);
	}
	else
	{
	return ('\0');
	}
}
