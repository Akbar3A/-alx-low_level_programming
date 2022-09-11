#include <stdio.h>
/**
 * main -  a program:prints all possible different combinations of two digits
 * Return: 0
 */
int main(void)
{
	int count = 0;
	int xx;
	int xy;
	int xz;

	while (count <= 999)
	{
		 xx = (count / 100 + '0');
		 xy = (count / 10 % 10 + '0');
		 xz = (count % 10 + '0');

		if (( xx <  xy) && ( xy <  xz))
		{
			putchar(xx);
			putchar(xy);
			putchar(xz);

			if (count != 789)
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
