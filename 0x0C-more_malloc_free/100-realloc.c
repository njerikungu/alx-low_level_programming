#include "main.h"

/**
 *_realloc - reallocates a mmeory
 *@ptr: pointer to memory
 *@old_size: size in bytes of allocated space
 *@new_size: new size in bytes
 *Return: ptr
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
		ptr = malloc(new_size);

	if (new_size == old_size)
		return (ptr);

	free(ptr);

	ptr = malloc(new_size);
	return (ptr);
}

