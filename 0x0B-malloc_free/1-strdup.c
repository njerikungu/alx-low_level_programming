#include "main.h"

/**
 *_strdup - returns pointer to a newly allocated space
 *@str: string to be copied
 *Return: NULL if str = NULL or if memory is insufficient
 *and pointer on success
 */

char *_strdup(char *str)
{
	char *cpy;
	int i;
	int len = 0;

	if (str == NULL)
		return (NULL);
	for (i = 0; i < str[i]; i++)
		len++;
	cpy = malloc(sizeof(char) * (len + 1));
	if (cpy == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
	{
		cpy[i] = str[i];
	}
	return (cpy);
}
