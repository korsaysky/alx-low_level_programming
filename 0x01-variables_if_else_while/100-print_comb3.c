#include <stdio.h>
/**
 *main - entry point
 *Description: ' prints all possible different combinations of two digits'
 *Return: always is 0 for success
 */
int main(void)
{
	int n = 48;
	int m;

	while (n <= 57)
	{
		m = 48;

		while (m <= 57)
		{
			if (n < m && n != m)
			{
				putchar(n);
				putchar(m);
				if (n + m != 113)
				{
					putchar(',');
					putchar(' ');
				}
			}
			m++;
		}
		n++;
	}

	putchar('\n');

	return (0);
}
