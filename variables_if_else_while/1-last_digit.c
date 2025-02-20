#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/** 
 *Last digit print the last digit of a random number and return a text 
 *when that last digit is greater than 5 or less than 6 and not 0.
 *Always return (0) 
 */
int main(void)
{
int n;
int last_digit;

srand(time(0));
n = rand() - RAND_MAX / 2;
last_digit = n % 10;
printf("Last digit of %d is %d and is ", n, last_digit);

if (last_digit > 5)
{
printf("greater than 5\n");
}
else if (last_digit == 0)
{
printf("0\n");
}
else
{
printf("less than 6 and not 0\n");
}
return (0);
}
