#include "function_pointers.h"

/**
 * array_iterator - Function that executes a function given as a parameter
 * on each element of an array
 * @array: Array.
 * @size: Size of array.
 * @action: A pointer to the function to be executed.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
