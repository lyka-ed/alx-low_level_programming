#include "main.h"

/**
 * _realloc - Function that reallocates a memory block using malloc and free
 * @ptr: pointer allocated  to memory
 * @old_size: old size of memory allocated
 * @new_size: new size of allocated memory
 * Return: pointer to new memory location
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p, *relloc;
	unsigned int i;

	if (ptr != NULL)
	p = ptr;

	else
	{
		return (malloc(new_size));
	}

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (0);
	}

	relloc = malloc(new_size);
	if (relloc == NULL)
		return (0);

	for (i = 0; i < (old_size || i < new_size); i++)
	{
		*(relloc + i) = p[i];
	}

	free(ptr);
	return (relloc);
}
