#include "main.h"

/**
 * get_bit - Function that returns the  value of a bit at a given index.
 * @n: an integer.
 * @index: index that begins from 0 of the bit
 *
 * Return: value of the bit at index or -1 if error ocure
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	bit = (n >> index);
	if (index > 32)
	return (-1);
	return (bit & 1);
}
