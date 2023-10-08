#include <stdio.h>
/**
 * main - printing upper and lower alphabets
 * Return: (0)
 */

int main(void)

{
	char a, char c;

	for (a = 'a'; c = 'A'; a <= 'z'; c <= 'Z'; a++; c++)
		putchar(a);
	putchar('\n');
	putchar(c);
	return (0);
}
	
