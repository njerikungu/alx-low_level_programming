#include "main.h"

/**
 *create_array - creates an array of chars
 *@size: size of array
 *@c: char to put
 *Return: NULL if size is 0, or if it fails or pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *x;
	unsigned int i;

	if (size == 0)
		return (NULL);
	x = malloc(sizeof(char) * size);
	if (x == NULL)
		return (NULL);

	for (i = 0; i < c; i++)
	{
		x[i] = c;
	}
	return (x);
}


