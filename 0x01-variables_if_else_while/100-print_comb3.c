#include <stdio.h>
/**
 * main -  a program:prints all possible different combinations of two digits
 * Return: 0
 */
int main(void)
{
	int count = 0;
	int d;
	int e;

	while (count <= 99)
	{
	            d = (count / 10 + '0');
		    e = (count % 10 + '0');

		if (d < e)
		{
			putchar(d);
			putchar(e);

			if (count != 89)
			{
				putchar(',');
				putchar(' ');
			}
		}
		count++;
	}
putchar('\n');
return (0);
}
