#include "main.h"
#include <stdio.h>

/**
 * fizz_buzz - print numbers except the multiple of 5.
 *
 */

void fizz_buzz(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 3 == 0 && n % 5 == 0)
			printf("FizzBuzz");
		else if (n % 3 == 0)
			printf("Fizz");
		else if (n % 5 == 0)
			printf("Buzz");
		else
			printf("%d", n);

		if (n < 100)
			printf(" ");
	}
	printf("\n");
}


/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	fizz_buzz();
	return (0);
}
