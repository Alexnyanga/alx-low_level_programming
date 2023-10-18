#include <stdio.h>

/**
 * swap int - swaps the values of two integers.
 * @a: The first value to be swapped.
 * @b: The second value to be swapped.
 * Return: nothing
 */
void swap_int(int *a, int *b)
/*the function that swaps the values of two integers.*/
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
