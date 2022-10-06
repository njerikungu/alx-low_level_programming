#include "main.h"

/**
 *array_range - creates an array of integers
 *@min: minimum value of array
 *@max: maximum value of array
 *Return: ptr
 */

int *array_range(int min, int max)
{
	int *array;
	int i, len;

	if (min > max)
		return (NULL);

	len = max - min + 1;

	array = malloc(sizeof(int) * len);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		array[i] = min++;

	return (array);
}
