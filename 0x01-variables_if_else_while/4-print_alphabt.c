#include <stdio.h>
/**
 *main - entry point
 *Description: 'prints the alphabet in lowercase, followed by a new line'
 *Return: always 0 for success
 */
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		if (n == 101 || n == 113)
		{
			n++;
		}
		putchar(n);
		n++;
	}

	putchar('\n');

	return (0);
}
