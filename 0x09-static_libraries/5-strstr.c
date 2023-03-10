#include "main.h"

/**
 * _strstr - Function that locates a substring.
 * @haystack: input string
 * @needle: input string to locate into string haystack
 * Return: a pointer to the beginning of the located substring, or
 * NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
        for (; *haystack != '\0'; haystack++)
        {
                char *l = haystack;
                char *p = needle;

                while (*l == *p && *p != '\0')
                {
                        l++;
                        p++;
                }

                if (*p == '\0')
                        return (haystack);
        }

        return (0);
}
