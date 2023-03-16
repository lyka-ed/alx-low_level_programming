#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Function that allocates memory using malloc.
 * @b: An unsigned input integer
 * Return: A pointer to allocated memory or NULL if it fails
 */
void *malloc_checked(unsigned int b)
{

	void *i;

	i = malloc(b);

	if (i == NULL)

		exit(98);

	return (i);
}
