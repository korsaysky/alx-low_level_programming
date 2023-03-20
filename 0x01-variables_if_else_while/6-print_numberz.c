#include <stdio.h>
/**
 *main - entry point
 *Description: 'print numbers of base 10 starting from 0 then a new line'
 *Return: always is 0 success
 */
int main(void)
{
	int num = 48;

	while (num <= 57)
	{
		putchar(num);
		num++;
	}

	putchar('\n');

	return (0);
}
