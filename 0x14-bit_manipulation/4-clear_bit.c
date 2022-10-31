#include "main.h"

/**
 * clear_bit - sets value of bit to 0
 * @n: pointer integer
 * @index: index integer
 * Return: 1 if successful, -1 if error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 <<  index);

	return (1);
}
