#include "main.h"

/**
 *_memcpy - copies memory area
 *@dest: memory destination
 *@src: memory source
 *@n: number of bytes
 *Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

		for (i = 0; i < n; i++)
		{
			*(dest + i) = *(src + i);
		}
	return (dest);
}

