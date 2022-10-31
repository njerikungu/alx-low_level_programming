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

	if (b == NULL)
		return (num);

	while (b[len] != '\0')
		len++;
	len -= 1;

	i = 0;
	while (b[i])
	{
		if ((b[i] != '0') && (b[i] != '1'))
			return (num);

		if (b[i] == '1')
			num += (1 * (1 << len));
		i++;
		len--;
	}
	return (num);
}
