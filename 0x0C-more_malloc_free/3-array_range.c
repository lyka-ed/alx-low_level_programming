#include "main.h"
#include <stdlib.h>

/**
 * array_range - A function that creates an array of integers
 * @min: Minimum  number to start
 * @max: Maximum number to start
 * Return: Pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *arr, i = 0, t = min;

	if (min > max)
		return (NULL);
	arr = malloc((max - min + 1) * sizeof(int));

	if (!arr)
		return (NULL);
	while (i <= max - min)
		arr[i++] = t++;
	return (arr);
}
