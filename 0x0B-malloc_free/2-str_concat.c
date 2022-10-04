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
	int i, j, len1, len2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (*(s1 + len1))
		len1++;
	while (*(s2 + len2))
		len2++;

	a = (char *) malloc(sizeof(char) * (len1 + len2));
	if (a == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
		a[j++] = s1[i++];
	i = 0;
	while (s2[i])
		a[j++] = s2[i++];
	return (a);
}
