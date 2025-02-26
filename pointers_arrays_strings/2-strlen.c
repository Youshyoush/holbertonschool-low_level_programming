#include "main.h"

/**
 * int _strlen - returns the length of a string
 * @s: pointer string.
 * 
 * Return: length of the string.
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
