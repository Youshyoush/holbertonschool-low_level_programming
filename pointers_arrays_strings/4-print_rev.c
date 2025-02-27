#include "main.h"

/**
 * print_rev - print a sting in reverse
 * @s: the sting to be printed
 */

void print_rev(char *s)
{
	int j = 0;

	while (s[j] != '\0')
	{
		j++;
	}

	while (j > 0)
	{
		_putchar(s[j - 1]);
		j--;
	}
	_putchar('\n');
}
