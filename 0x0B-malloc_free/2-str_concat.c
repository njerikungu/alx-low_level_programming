#include "main.h"

/**
 *str_concat - concatenantes two strings
 *@s1: string 1
 *@s2: string 2
 *Return: NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *a;
	int i, j;
	int len1 = 0;
	int len2 = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		len1++;
	for (j = 0; s2[j]; j++)
		len2++;
	len2++;

	a = malloc(sizeof(char) * (len1 + len2));

	if (a == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		a[i] = s1[i];

	for (j = 0; j <= len2; i++, j++)
		a[i] = s2[j];

	return (a);
}
