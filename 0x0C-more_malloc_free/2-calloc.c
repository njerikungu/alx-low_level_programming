#include "main.h"

/**
 *_calloc - allocates memory for an array
 *@nmemb: number of elements
 *@size: number of bytes
 *Return: ptr
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *m;
	char *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	m = malloc(size * nmemb);

	if (m == NULL)
		return (NULL);

	p = m;

	for (i = 0; i < (size * nmemb); i++)
		p[i] = '\0';
	return (m);
}
