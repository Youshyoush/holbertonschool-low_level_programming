#include "main.h"
#include <stdlib.h>

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: Pointer to the string.
 * @accept: Pointer to the string containing bytes to search for.
 *
 * Return: Pointer to the byte in `s` that matches one of the bytes in `accept`, or NULL if not found.
 */
char *_strpbrk(char *s, char *accept)
{
	char *a;

	while (*s != '\0')
	{
		for (a = accept; *a != '\0'; a++)
		{
			if (*s == *a)
			{
				return (s);
			}
		}
		s++;
	}

	return (NULL);
}
