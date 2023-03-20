#include <stdio.h>
/**
 *main - entry point
 *Description: 'print characteres lowercase'
 *Return: always is 0 for  success
 */
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}

	putchar ('\n');

	return (0);
}
