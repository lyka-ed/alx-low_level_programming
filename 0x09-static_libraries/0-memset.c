#include "main.h"

/**
 * _memset - a function that fills memory with constant bytes
 * @s: location to fill
 * @b: char to fill location with
 * @n: number of bytes to fill
 * Return: returns pointer to location filled
 */
char *_memset(char *s, char b, unsigned int n)
{
        int i = 0;

        for (; n > 0; i++)
        {
                s[i] = b;
                n--;
        }
        return (s);
}
