#include "main.h"

/**
 * _strchr - Function that locates a character in a string.
 * @s: input string
 * @c: input character ro locate string
 * Return: returns pointer to c position
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
