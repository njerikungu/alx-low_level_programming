#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointe to string
 * Return: conveeted number or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int len = 0;
	int i;

	if (!b)
		return (0);
	num = 0;

	for (len = 0; b[len] != '\0'; len++)
		;

	for (len--, i = 1; len >= 0; len--, i *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}

		if (b[len] & 1)
		{
			num += i;
		}
	}
	return (num);
}
