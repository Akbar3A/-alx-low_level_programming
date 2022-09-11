#include <stdio.h>
/**
 * main -  prints all single digit numbers of base ten starting from zero
 *
 * Description: using the main function
 * This program " prints all single digit numbers of base 10 starts from 0
 * Return: 0
 */
int main(void)
{
int n;
for (n = '0'; n <= '9'; n++)
{
	putchar(n);
}
putchar('\n');
return (0);
}
