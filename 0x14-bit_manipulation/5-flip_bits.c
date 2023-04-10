#include "main.h"

/**
 * flip_bits - Function that returns the number of bits you
 * would need to flip to get from one number to another.
 * @n: integer input value
 * @m: integer input value
 *
 * Return: number of bits flipped or Nothing 0
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int g, flip_xs = 0;
	unsigned long int j = sizeof(unsigned long int) * 16;

	for (g = 0; g < j; g++)
	{
		if ((m & 1) != (n & 1))
			flip_xs += 1;
		n = n >> 1;
		m = m >> 1;
	}

	return (flip_xs);
}
