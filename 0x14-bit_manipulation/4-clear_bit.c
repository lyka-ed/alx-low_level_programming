#include "main.h"
#include <stdlib.h>

/**
 * clear_bit - Function that sets the value of a bit to 0 at a given index.
 * @n: integer pointer to access value for change.
 * @index: index starting from 0 of the bit.
 * Return: 1 if worked, or -1 if an error occured.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 16)
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
