#include <stdio.h>
/**
 *main - entry point
 *Description: ' prints all possible different combinations of three digits'
 *Return: always is 0 for success
 */
int main(void)
{
	int a = 48;
	int b;
	int c;

	while (a <= 57)
	{
		b = 48;

		while (b <= 57)
		{
			c = 48;

			while (c <= 57)
			{
				if (a < b && b < c)
				{
					putchar(a);
					putchar(b);
					putchar(c);
					if (a + b + c != 168)
					{
						putchar(',');
						putchar(' ');
					}
				}
				c++;
			}
			b++;
		}
		a++;
	}

	putchar('\n');

	return (0);
}
