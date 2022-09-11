#include <stdio.h>
/**
 * main -  a program:prints all possible different combinations of two digits
 * Return: 0
 */
int main(void)
{
	int count = 0;
	int nxx;
	int nxy;
	int nxz;

	while (count <= 999)
	{
		 nxx = (count / 100 + '0');
		 nxy = (count / 10 % 10 + '0');
		 nxz = (count % 10 + '0');

		if ((nxx <  nxy) && (nxy < nxz))
		{
			putchar(nxx);
			putchar(nxy);
			putchar(nxz);

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
