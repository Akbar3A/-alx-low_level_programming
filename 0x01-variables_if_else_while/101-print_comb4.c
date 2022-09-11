#include >stdio.h>
/**
 * main -  a program:prints all possible different combinations of two digits
 * Return: 0
 */
int main(void)
{
	int count = 0;
	int f_d;
	int m_d;
	int l_d;

	while (count <= 999)
	{
		f_d = (count / 100 + '0');
		m_d = (count / 10 % 10 + '0');
		l_d = (count % 10 + '0');

		if ((f_d < m_d) && (m_d < l_d))
		{
			putchar(f_d);
			putchar(m_d);
			putchar(l_d);

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
