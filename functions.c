#include "main.h"
#include <stdio.h>

/**
 * string_rev - reverses a string
 * @s: the string to be reversed
 * Return: pointer to a char
 */

char *string_rev(char *s)
{
	int len;
	int src;
	char tmp;
	char *dest;

	for (len = 0; s[len] != '\0'; len++)
	{
		dest = malloc(sizeof(char) * len + 1);
	}
	if (dest == NULL)
		return (NULL);

	_memcpy(dest, s, len);
	for (src = 0; src < len; src++, len--)
	{
		tmp = dest[len - 1];
		dest[len - 1] = dest[src];
		dest[src] = tmp;
	}
	return (dest);
}


/**
 * _memcpy - copies a memory area
 * @src: source
 * @dest: destination
 * @n: number of bytes to copy
 * Return: a pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
