#include <stdio.h>
/**
 * main - printing upper and lower alphabets
 * Return: (0)
 */

int main(void)

{
	char a, char c;

	for (a = 'a'; a <= 'z'; a++)
		putchar(a);
	for (c = 'A'; c <= 'Z'; c++)
	putchar(c);
	putchar('\n');
	return (0);
}
	
