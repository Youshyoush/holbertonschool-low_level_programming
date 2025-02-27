#include "main.h"

/**
 * rev_string - reverse a string
 * @s: pointer to string
 *
 */

void rev_string(char *s)
{
	int i, j = 0;
	string tmp;

	while (s[i] != '\0')
	{
		i++;
	}

	while (i > 0)
	{
		s[i - 1] = tmp[j];
		i--, j++;
	}
	*s = tmp;
}	
