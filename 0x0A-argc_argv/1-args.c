#include "main.h"
#include <stdio.h>

/**
 * main - A program that prints the number of arguements you passed into it
 * @argc: Argument counter
 * @argv: Argument values
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void) argv; /*Ignore argv*/

	printf("%d\n", argc - 1);

	return (0);
}
