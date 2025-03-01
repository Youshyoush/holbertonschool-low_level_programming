#include "main.h"

/**
 * puts_half - check the code
 * @str: pointer string
 *
 */

void puts_half(char *str)
{
	int len = 0, j;

	while (str[len] != '\0')
	{
		len++;
	}
	if (len % 2 == 0)
	{
		j = len / 2;
	}
	else
	{
		j = (len + 1) / 2;
	}
	while (str[j] != '\0')
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
