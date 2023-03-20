#include <stdio.h>
/**
 *main - entry point
 *Description: 'print numbers of base 16 in lowercase, then new line'
 *Return: always is 0 for success
 */
int main(void)
{
	int n = 48;
	int m = 97;

	while (n <= 57)
	{
		putchar(n);
		n++;
	}
	while (m <= 102)
	{
		putchar(m);
		m++;
	}

	putchar('\n');

	return (0);
}
