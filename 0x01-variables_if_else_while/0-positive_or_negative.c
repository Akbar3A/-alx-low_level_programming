#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - A program that prints when the number is postive, zero, or negative
* Description: using the main function
* Program prints "Programming is positive, zero, or negative"
* Return: 0
*/
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

if (n > 0)
{
	printf("%i is positive\n", n);
}
else if (nm == 0)
{
	printf("%i is zero\n", n);
}
else if (n < 0)
{
	printf("%i is negative\n", n);
}
return (0);
}
