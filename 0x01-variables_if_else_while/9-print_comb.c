#include <stdio.h>
/**
 * main - prints al possible combinations of single digit numbers.
 *
 * Return: 0 on succes
 */
int main(void)
{
	int i = '0';

	while (i <= '9')
	{
		putchar(i);
		if (i != '9');
		{
			putchar(',');
			putchar(' ');
		}
		++i;
	}
	putchar('\n');
	return (0);
}
