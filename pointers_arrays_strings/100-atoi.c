#include "main.h"
#include <limits.h>

/**
 * _atoi - Converts a string to an integer
 * @s: The string to convert
 *
 * Return: The converted integer, or 0 if no valid numbers are found
 */

int _atoi(char *s)
{
	int sign = 1;
	unsigned int num = 0;
	int found_digit = 0;

	while (*s)
	{
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
		{
			found_digit = 1;
			if (num > (INT_MAX / 10) || (num == (INT_MAX / 10) && (*s - '0') > (INT_MAX % 10)))
			{
				return (sign == 1 ? INT_MAX : INT_MIN);
			}

			num = num * 10 + (*s - '0');
		}
		else if (found_digit)
			break;

		s++;
	}

	return (num * sign);
}

