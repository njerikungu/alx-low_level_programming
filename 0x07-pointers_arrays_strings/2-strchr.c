#include "main.h"

/**
 *_strchr - locates a character in a string
 *@s: string in which to search
 *@c: character to search
 *Return: poointer s
 */

char *_strchr(char *s, char c)
{
	while (*s != c && *s != '\0')
	{
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	else
	{
		return (NULL);
	}
}
