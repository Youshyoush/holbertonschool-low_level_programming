#include "main.h"

/**
 * rev_string - reverse a string
 * @s: pointer to string
 *
 */

void rev_string(char *s)
{
	int i = 0, j;
	char tmp;

	while (s[i] != '\0')
	{
		i++;
	}

	for (j = 0; j < i / 2; j++)
	{
		tmp = s[j];
		s[j] = s[i - j - 1];
		s[i - j - 1] = tmp;
	}
}
