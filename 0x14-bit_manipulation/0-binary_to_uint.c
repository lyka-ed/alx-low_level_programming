#include "main.h"

/**
 * binary_to_uint - Function that converts a binary number to unsigned int
 * @b: pointing to string of 0 and 1 chars.
 *
 * Return: the converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	int g;
	unsigned int bi_num = 0;

	if (!b)
		return (0);
	for (g = 0; b[g]; g++)
	{
		if (b[g] < '0' || b[g] > '1')
			return (0);
		bi_num = 2 * bi_num + (b[g] - '0');
	}
	return (bi_num);
}
