#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copy a string from src point to to pointer dest with the null termitator
 * @dest: destination pointer where the string is pointed to
 * @src: the pointer string to be copied
 *
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
