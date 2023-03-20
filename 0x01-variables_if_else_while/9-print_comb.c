#include <stdio.h>
/**
 *main - entry point
 *Description: 'prints all possible combinations of single-digit numbers'
 *Return: always 0 for success
 */
int main(void)
{
	int n = 48;

	while (n <= 57)
	{
		putchar(n);
		if (n == 57)
		{
			break;
		}
		putchar(',');
		putchar(' ');
		n++;
	}

	putchar('\n');

	return (0);
}
