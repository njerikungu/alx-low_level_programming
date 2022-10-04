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
	int len;

	if (str == NULL)
		return (NULL);
	for (i = 0; i < str[len]; i++)
		len++;
	cpy = (char *) malloc(sizeof(char) * (len + 1));
	if (cpy == NULL)
		return (NULL);
	for (i = 0; i < str[len]; i++)
	{
		cpy[i] = str[i];
	}
	return (cpy);
}
