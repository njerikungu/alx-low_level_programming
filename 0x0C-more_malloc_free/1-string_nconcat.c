#include "main.h"

/**
 *string_nconcat - concatenates two strings
 *@s1: string one
 *@s2: string two
 *@n: integer n
 *Return: 0
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *c;
	unsigned int len1 = 0;
	unsigned int len2 = 0;
	unsigned int i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	if (n > len2)
		n = len2;
	c = malloc((len1 + n + 1) * sizeof(char));

	if (c == NULL)
		return (0);

	for (i = 0; i < len1; i++)
	{
		c[i] = s1[i];
	}
	for (; i < (len1 + n); i++)
	{
		c[i] = s2[i - len1];
	}
	c[i] = '\0';
	return (c);
}
