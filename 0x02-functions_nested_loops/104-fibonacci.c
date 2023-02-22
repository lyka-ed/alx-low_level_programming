#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers
 * Return: Always 0.
 */
int main(void)
{
	int prev = 1, curr = 2, next, count = 2;

	printf("%d, %d, ", prev, curr);

	while (count < 98)
	{
		next = prev + curr;
		prev = curr;
		curr = next;
		count++;

		printf("%d", next);
		if (count < 98)
			printf(", ");
	}

	printf("\n");
	return (0);
}
