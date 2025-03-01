#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: pointer to the string to convert
 *
 * Return: the converted integer
 */

int _atoi(char *s)
{
	int sign = 1; // Sign of the number (1 for positive, -1 for negative)
	int result = 0; // Stores the converted integer
	int i = 0;

	/* Skip leading spaces */
	while (s[i] == ' ')
	{
		i++;
	}

	/* Handle optional sign */
	if (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
		{
			sign = -1;
		}
		i++;
	}
	while (s[i] != '\0' && (s[i] < '0' || s[i] > '9'))
	{
		i++;
	}
	/* Convert digits to integer */
	while (s[i] >= '0' && s[i] <= '9')
	{
		result = result * 10 + (s[i] - '0');
		i++;
	}
	return (result * sign);
}
