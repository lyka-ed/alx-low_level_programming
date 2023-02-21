#include "main.h"

/**
 * _abs - Check main
 * @r: integer input
 * Description: Function that computes absolute value of an integer
 * Return: Absolute value of number r
 */
int _abs(int r)
{
	if (r >= 0)
		return (r);
	else
		return (r * -1);
}
