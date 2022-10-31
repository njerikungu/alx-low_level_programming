#include "main.h"

/**
 * set_bit - sets the value of bit to 1
 * @n: pointer integer
 * @index: index integer
 * Return: 1 on success, -1 for error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);

	return (1);
}
