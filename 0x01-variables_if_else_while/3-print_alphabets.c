#include <stdio.h>
/**
 *main - entry point
 *Description: 'print lowarcase alphabets then uppercase'
 *Return: always is 0 for success
 */
int main(void)
{
	int n = 97, m = 65;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	while (m <= 90)
	{
		putchar(m);
		m++;
	}

	putchar('\n');

	return (0);
}
