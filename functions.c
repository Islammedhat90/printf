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


/**
 * base_len - Calculates the length of an octal number
 * @num: the number to be calculated
 * @base: the base to be used
 * Return: the length of the number
 */
unsigned int base_len(unsigned int num, int base)
{
	unsigned int i;

	for (i = 0; num > 0; i++)
	{
		num = num / base;
	}
	return (i);
}


/**
 * write_base - sends characters to be written on standard output
 * @s: the string to be computed
 */
void write_base(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		_putchar(s[i]);
}
