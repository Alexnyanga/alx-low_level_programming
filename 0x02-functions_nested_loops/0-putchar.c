#include <stdio.h>
#include <unistd.h>
/**
 * main - printing putchar without printf and putd
 * Return: (0)
 */
int main(void)
{
	write(1,"_putchar", 8);
	return (0);
}
