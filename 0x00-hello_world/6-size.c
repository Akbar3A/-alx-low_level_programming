#include <stdio.h>

/**
* main - print the string in the put function
*
* Description: using the main function
* this program prints "Programming is like building a multilingual puzzle
* Return: 0
*/
int main(void)
{
	char cr;
	int it;
	long lon;
	long long llon;
	float flt;

	printf("Size of a char: %ld byte(s)\n", sizeof(cr));
	printf("Size of an int: %ld byte(s)\n", sizeof(it));
	printf("Size of a long int: %ld byte(s)\n", sizeof(lon));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(llon));
	printf("Size of a float: %ld byte(s)\n", sizeof(flt));
	return (0);
}
