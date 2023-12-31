#include "main.h"
/**
 * char *-strcpy - a function that copies the string pointed by the src
 * @dest: copy to
 * @src: copy from
 * @_strcpy: string to be copied
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int x = 0;

	while (*(src + l) != '\0')
	{
		l++;
	}
	for ( ; x < l ; x++)
	{
		dest[x] = src[x];
	}
	dest[l] = '\0';
	return (dest);
}

